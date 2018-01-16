// History:
// - Using array of gems, sorting it, and iterating ((for i: 0..n) (for j: 0..i-1) (i'th semiresult))
//   39%, TLE: 4, 10-16; WA: 5,6,7
//
// - Using set of gems (autosort), and map of values, iterating (for i: GEMS) for(j: GEM_VALUES from max to low) (first passed is i'th semiresult))
//   56%, TLE: 4, 10, 13, 14; WA: 5,6,9,11
//
// - Using `long long`
//  78%, TLE: 4, 11, 13, 14
//

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>


using namespace std;

typedef long long INT;


INT n, r, w, h;


typedef pair<INT, INT> gem_t;         // tuple (y . x)

typedef set< gem_t > gems_t;          // sorted by y
gems_t gems;




//****************************************************************************
//
//  passed gems:
//

typedef multimap<INT, gem_t> gems_by_value_t;      // value -> gem 
gems_by_value_t gems_by_value;


inline bool gems_on_way(const gem_t& gem0, const gem_t& gem1) {
  INT y0 = gem0.first, x0 = gem0.second;
  INT y = gem1.first, x = gem1.second;

  if (y0 == y) return x0 == x;

  INT dy = y - y0, dx = abs(x - x0);
  return (dx * r <= dy);
}

void insert_gem(const gem_t& gem, INT value) {
  gems_by_value.insert(make_pair(value, gem));
}


INT search_max_value(const gem_t& gem) {
  int possible_gems = 1;                                 // maximum possible gems to take if take i'th

  for (gems_by_value_t::reverse_iterator jt = gems_by_value.rbegin(); jt != gems_by_value.rend(); ++jt) {       // loop by decreasing value
    if (gems_on_way(jt->second, gem)) {                             // can take j and then target gem
      possible_gems = jt->first + 1;                                // so, we can take j'ts gem, and j'ts value is maximum among others we can take
      break;
    }
  }

  return possible_gems;
}
//
//
//****************************************************************************


struct my_2d_tree_t {
  my_2d_tree_t* rt;
  my_2d_tree_t* lt;
  my_2d_tree_t* lb;
  my_2d_tree_t* rb;
  INT x;
  INT y;
  INT value;
  my_2d_tree_t(INT xx, INT yy, INT vv): x(xx), y(yy), value(vv), rt(NULL), lt(NULL), lb(NULL), rb(NULL) {}
};

my_2d_tree_t* tree = NULL;


my_2d_tree_t* tree_insert_item(my_2d_tree_t* tree, INT x, INT y, INT value) {
  if (tree == NULL) {
    tree = new my_2d_tree_t(x, y, value);
    return tree;
  }
  int is_inside = int(tree->x <= x && y <= tree->y);

  if (tree->x <= x) {   // rt || rb
    if (tree->y <= y) tree->value = max(tree->value, (tree->rt = tree_insert_item(tree->rt, x, y, value))->value + is_inside);
    else              tree->value = max(tree->value, (tree->rb = tree_insert_item(tree->rb, x, y, value))->value + is_inside);
  } else {              // lt, lb
    if (tree->y <= y) tree->value = max(tree->value, (tree->lt = tree_insert_item(tree->lt, x, y, value))->value + is_inside);
    else              tree->value = max(tree->value, (tree->lb = tree_insert_item(tree->lb, x, y, value))->value + is_inside);
  }
  return tree;
}


void insert_gem2(const gem_t& gem, INT value) {
  INT x1 = gem.second * r - gem.first,
      x2 = gem.second * r + gem.first;
  // x1..x2 (x1 <= x2) - projection of path on axis y=0

  cout << "Point (" << gem.second << ", " << gem.first << ") has interval: (" << x1 << " - " << x2 << ") with value=" << value<< endl;
  tree = tree_insert_item(tree, x1, x2, value);
}


#define UNDEF -1

INT search_max_value2_helper(my_2d_tree_t* tree, INT s, INT e) {
  if (tree == NULL) {
    return UNDEF;
  }

  bool t = tree->y < s;
  bool b = e < tree->y;
  bool r = tree->x < s;
  bool l = e < tree->x;


  cout << "search_max_value2_helper tree=(" << tree->x << ", " << tree-> y << ") interval=(" << s << ".." << e << ")" << endl;

  if (r && t) return search_max_value2_helper(tree->rt, s, e);
  if (l && t) return search_max_value2_helper(tree->lt, s, e);
  if (l && b) return search_max_value2_helper(tree->lb, s, e);
  if (r && b) return search_max_value2_helper(tree->rb, s, e);
  
  if (r) return max(search_max_value2_helper(tree->rt, s, e), search_max_value2_helper(tree->rb, s, e));
  if (t) return max(search_max_value2_helper(tree->rt, s, e), search_max_value2_helper(tree->lt, s, e));
  if (l) return max(search_max_value2_helper(tree->lt, s, e), search_max_value2_helper(tree->lb, s, e));
  if (b) return max(search_max_value2_helper(tree->lb, s, e), search_max_value2_helper(tree->rb, s, e));

  cout << "         FITS" << endl; 
  return max(
    tree->value,
    max(
      max(search_max_value2_helper(tree->rt, s, e), search_max_value2_helper(tree->rb, s, e)),
      max(search_max_value2_helper(tree->lt, s, e), search_max_value2_helper(tree->lb, s, e))));
}

INT search_max_value2(const gem_t& gem) {
  INT x1 = gem.second * r - gem.first,
      x2 = gem.second * r + gem.first;
  INT val = search_max_value2_helper(tree, x1, x2);
  if (val == UNDEF) {
    val = 1;
  }
  return val;
}




int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> r >> w >> h;

  gem_t gem;

  for (int i = 0; i < n; i++) {
    cin >> gem.second >> gem.first;
    gems.insert(gem);
  }

  int result = 0;

  for (gems_t::iterator it = gems.begin(); it != gems.end(); ++it) {
    int possible_gems = search_max_value2(*it);
    insert_gem2(*it, possible_gems);
    result = max(possible_gems, result);
  }

  cout << result << '\n';  

  return 0;
}
