#include <set>
#include <iostream>
#include <string> 

int main() {
  unsigned long n = 1233445;
  unsigned k = 6;

  std::string n_str = std::to_string(n);  
  std::set<char> uniques(n_str.begin(), n_str.begin() + k);

  std::cout << uniques.size() << std::endl;
  return 0;
}
