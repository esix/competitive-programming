#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <list>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

	while (true)	{
    int n;
		cin >> n;
		if (n == 0) break;

    vector<pair<int, int> > a(n+1);       // v, i

		for (int i = 1; i <= n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}

		sort(a.begin() + 1, a.end());

    vector<int> idx(n+1);

		for (int i = 1; i <= n; i++) {
			idx[a[i].second] = i;
    }

    vector<int> cnt(n+1);

    long long r = 0;

		for (int i = 1; i <= n; i++) {
			r += i;

	    int j = idx[i];
	    while (j <= n) {
		    cnt[j]++;
		    j += j & (-j);
	    }
      
      j = idx[i];
	    while (j > 0) {
		    r -= cnt[j];
		    j -= j & (-j);
	    }
		}
		cout << r << '\n';
	}
}
