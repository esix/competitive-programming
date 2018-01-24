#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

struct Lst {
  int value;
  Lst* prev;
  Lst* next;

  Lst(int v) : value(v), next(this), prev(this) {}
};


Lst* append(Lst* lst1, Lst* lst2) {
  if (lst1 == NULL) return lst2;
  if (lst2 == NULL) return lst1;

  Lst* lst2_first = lst2;
  Lst* lst2_last = lst2->prev;

  lst2->prev->next = lst1;
  lst2->prev = lst1->prev;

  lst1->prev->next = lst2_first;
  lst1->prev = lst2_last;
  
  return lst1;
}


Lst* append(Lst* lst1, int value) {
  return append(lst1, new Lst(value));
}



map<int, Lst*> bs;


void print_lst(Lst* lst) {
  if (lst == NULL) {
    return;
  }
  Lst* item = lst;
  do {
    cout << item->value << ' ';
    item = item->next;
  } while (item != lst);
}


void print_lst_inv(Lst* lst) {
  if (lst == NULL) {
    return;
  }
  lst = lst->prev;  // last item
 
  Lst* item = lst;

  do {
    cout << item->value << ' ';
    item = item->prev;
  } while (item != lst);
}


void dbg_print_all() {
  for(map<int, Lst*>::iterator it = bs.begin(); it != bs.end(); it++) {
    cout << it->first << ':' << ' ';
    print_lst(it->second);
    cout << " ("; print_lst_inv(it->second); cout << ")\n";
  }
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char c = 0;
  while (true) {
    cin >> c;
    if (c == 'E') break;

    if (c == 'A') {   // add
      int b_id, value;
      cin >> b_id >> value;
      bs[b_id] = append(bs[b_id], value);
      //cout << 'A' << ' ' << b_id << ' ' << value << endl;


    } else if (c == 'M') { // move
      int b1, b2;
      cin >> b1 >> b2;
      //cout << 'M' << ' ' << b1 << ' ' << b2 << endl;
      if (b1 != b2) {
        bs[b2] = append(bs[b2], bs[b1]);
        bs[b1] = NULL;
      }
    }
    //dbg_print_all();
    //cout << endl;
  }


  for(map<int, Lst*>::iterator it = bs.begin(); it != bs.end(); it++) {
    if (it->second) {
      cout << it->first << ':' << ' ';
      print_lst_inv(it->second);
      cout << '\n';
    }
  }

  return 0;
}
