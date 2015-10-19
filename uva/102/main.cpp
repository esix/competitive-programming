#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

const int B = 0;
const int G = 1;
const int C = 2;

int solve(int a[3][3], int perm[3]) {
  int result = 0;
  for(int bin = 0; bin < 3; bin++)
    for(int color = 0; color < 3; color++) {
      if(color != perm[bin]) {
        result += a[bin][color];
      }
    }
  return result;
}

string get_color(int id) {
  switch(id) {
    case B: return "B";
    case G: return "G";
    case C: return "C";
  }
  return "";
}


int main() {
  ios::sync_with_stdio(false);

  string line;
  while(std::getline(std::cin, line)) {
    stringstream ss(line);

    if(!line.length())
      continue;

    int a[3][3];
    for(int bin = 0; bin < 3; bin++)
      for(int color = 0; color < 3; color++)
        ss >> a[bin][color];

    int min_score = -1;
    string min_order = "";

    int perms[6][3] = {
      {B, C, G},
      {B, G, C},
      {C, B, G},
      {G, B, C},
      {C, G, B},
      {G, C, B}
    };

    for(int i = 0; i < 6; i++) {
      int *perm = perms[i];
      int score = solve(a, perm);
      string order = get_color(perm[0]) + get_color(perm[1]) + get_color(perm[2]);

      if(min_score == -1 || score < min_score) {
        min_score = score;
        min_order = order;
      }
    };

    cout << min_order << " " << min_score << endl;
  }


  return 0;
}
