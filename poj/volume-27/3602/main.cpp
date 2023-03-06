#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

set<char> cs;


int state = 0;

const char ff = 1;
const char ffi = 2;
const char ffl = 3;
const char fi = 4;
const char fl = 5;
const char left_single_quote = 6;
const char right_single_quote = 7;
const char left_double_quote = 8;
const char right_double_quote = 9;

void next_char(char c) {
  switch (state) {
    case 0:
      if (c == 'f') state = 1;
      else if (c == '`') state = 10;
      else if (c == '\'') state = 20;
      else if (c && c != '\n' && c != ' ') cs.insert(c);
      break;

    case 1:
      if (c == 'f') state = 2;
      else if (c == 'i') { cs.insert(fi); state = 0; }
      else if (c == 'l') { cs.insert(fl); state = 0; }
      else if (c && c != '\n' && c != ' ') { cs.insert('f'); cs.insert(c); state = 0; }
      else { cs.insert('f'); state = 0; } 
      break;

    case 2: 
      if (c == 'i') { cs.insert(ffi); state = 0; }
      else if (c == 'l') { cs.insert(ffl); state = 0; }
      else if (c && c != '\n' && c != ' ') { cs.insert(ff); cs.insert(c); state = 0; }
      else { cs.insert(ff); state = 0; } 
      break;

    case 10: 
      if (c == '`') { cs.insert(left_double_quote); state = 0;}
      else if (c && c != '\n' && c != ' ') { cs.insert(left_single_quote); cs.insert(c); state = 0; } 
      else { cs.insert(left_single_quote); state = 0; }
      break;

    case 20:
      if (c == '\'') { cs.insert(right_double_quote); state = 0; }
      else if (c && c != '\n' && c != ' ') { cs.insert(right_single_quote); cs.insert(c); state = 0; }
      else { cs.insert(right_single_quote); state = 0; }
      break;
  }
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  std::string file;
  std::getline(std::cin, file, '\0');

  for (int i = 0; i < file.size(); i++) {
    next_char(file[i]);
  }
  next_char(0);

  cout << cs.size() << endl;
  return 0;
}
