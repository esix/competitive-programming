#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef long long int INT;


INT pow10(int n) {
  INT result = 1;
  while (n--) result *= 10;
  return result;
}

INT solve(INT n) {
	int num_digits;
	INT count = 0;
	INT ten_power = 9;

	for (num_digits = 1; count + ten_power < n; num_digits++){
		count += ten_power;
		if (num_digits % 2 != 1) ten_power *= 10;
	}
	
  INT left = pow10((num_digits  + 1) / 2 - 1) + n - count - 1;
	INT result = left;

	if (num_digits % 2 == 1)  {
		left /= 10;
  }

	while (left) {
		result = result * 10 + left % 10;
		left /= 10;
	}
	return result;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    INT n;
    cin >> n;
    if (!n) break;
    cout << solve(n) << endl;
  }
}
