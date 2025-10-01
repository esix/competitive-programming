#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int n, k;
	cin >> n >> k;
	map<int, int> counts;

	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		if (counts.find(v) == counts.end()) {
			cout << v << ' ';
			if (--k == 0) {
				break;
			}
			counts[v] = 0;
		} else {
			counts[v]++;
		}
	}

	map<int, int>::iterator it = counts.begin();
	while (k--) {
		while (it->second == 0) ++it;
		cout << it->first << ' ';
		it->second--;
	}
	
	cout << endl;
	return 0;
}

