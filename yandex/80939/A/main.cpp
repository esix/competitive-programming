#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int n;
	std::cin >> n;
	int sum_v = 0, 
			sum_m = 0, 
			min_v = std::numeric_limits<int>::max(), 
			max_m = std::numeric_limits<int>::min();

	for (int i = 0; i < n; i++) {
		int v;
		std::cin >> v;
		if (i % 2 == 0) {
			sum_v += v;
			min_v = min(min_v, v);
		} else {
			sum_m += v;
			max_m = max(max_m, v);
		}
	}

	if (n == 0 || n == 1) {
		cout << sum_v << endl;
	} else if (max_m - min_v > 0) {
		cout << sum_v - sum_m + 2 * (max_m - min_v) << endl;
	} else {
		cout << sum_v - sum_m << endl;
	}

	return 0;
}
