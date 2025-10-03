#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;

int main() 
{
  long n, m;
  cin >> n >> m;
  string line;
  getline(std::cin, line);

  getline(std::cin, line);

  map<string, queue<int>> positions;
  
  for (int i = 0; i < m; i ++) {
    string s = line.substr(i * n / m, n / m);
    map<string, queue<int>>::iterator it = positions.find(s);
    if (it != positions.end()) {
      it->second.push(i);
    } else {
      std::queue<int> q;
      q.push(i);
      positions.insert(make_pair(s, q));
    }
  }

  vector<int> result(m);

  for (int i = 0; i < m; i++) {
    getline(std::cin, line);

    map<string, queue<int>>::iterator it = positions.find(line);
    int idx = it->second.front();
    it->second.pop();
    result[idx] = i;
  }

  for (int i = 0; i < m; i++) {
    cout << result[i] + 1 << ' ';
  }
  cout << endl;
  
  return 0;
}
