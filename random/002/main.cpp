#include <vector>
#include <iostream>
#include <numeric>

int main() {
  int n = 5;
  std::vector<int> seq(n);
  std::iota (std::begin(seq), std::end(seq), 1);
  std::vector<std::string> lines;
  std::transform (seq.begin(), seq.end(), std::back_inserter(lines), [](int len) {return std::string(len, '*');});
  std::copy(lines.begin(), lines.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}
