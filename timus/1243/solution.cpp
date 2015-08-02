#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

bool divisibility_7(const string& str) {
  int buf = 0, l = str.length();
	if (l > 3) {
		bool flag = true;
		buf = 0;
		for (int i = l-1; i >= 3; i = i - 3) {
			if (flag) {
				buf = buf + ((int)str[i] - 48 + ((int)str[i-1] - 48) * 10 + ((int)str[i-2] - 48) * 100);
				flag = false;
			} else {
				buf = buf - ((int)str[i] - 48 + ((int)str[i-1] - 48) * 10 + ((int)str[i-2] - 48) * 100);
				flag = true;
			}
		}
		switch (l % 3) {
			case 0:
        if (flag) {
					buf = buf + ((int)str[2] - 48 + ((int)str[1] - 48) * 10 + ((int)str[0] - 48) * 100);
					flag = false;
				} else {
					buf = buf - ((int)str[2] - 48 + ((int)str[1] - 48) * 10 + ((int)str[0] - 48) * 100);
					flag = true;
				}
				break;
			case 1:
        if (flag) {
					buf = buf + (((int)str[0] - 48));
					flag = false;
				} else {
					buf = buf - (((int)str[0] - 48));
					flag = true;
				}
				break;
			case 2:
        if (flag) {
					buf = buf + (((int)str[1] - 48) + ((int)str[0] - 48) * 10);
					flag = false;
				} else {
					buf = buf - (((int)str[1] - 48) + ((int)str[0] - 48) * 10);
					flag = true;
				}
				break;
		}
		if (0 == buf % 7) {
			return true;
		} else {
			return false;
		}
	} else {
		stringstream ss;
    ss << str;
    int n;
    ss >> n;
    return (n % 7) == 0;
	}
}


string inc(const string s) {
  string result;
  int carry = 1;
  for(int i = s.length() - 1; i >= 0; i--) {
    int v = (s[i] - '0') + carry;
    result += char('0' + char(v%10));
    if(v >= 10) {
      v -= 10;
    } else {
      carry = 0;
    }
  }
  if(carry) {
    result += '1';
  }
  reverse(result.begin(), result.end());
  return result;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;
  int i;
  for(i = 0; i < 7; i++) {
    if(divisibility_7(s)) {
      break;
    } else {
      s = inc(s);
    }
  }

  cout << (i ? 7 - i : 0);
  return 0;
}
