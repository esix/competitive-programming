#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int INT;

#define abs(x) ((x) >= 0 ? (x) : -(x))

INT gcd (INT a, INT b, INT & x, INT & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	INT x1, y1;
	INT d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

bool find_any_solution (INT a, INT b, INT c, INT & x0, INT & y0, INT & g) {
	g = gcd (abs(a), abs(b), x0, y0);
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}

void shift_solution (INT & x, INT & y, INT a, INT b, INT cnt) {
	x += cnt * b;
	y -= cnt * a;
}

INT find_all_solutions (INT a, INT b, INT c, INT minx, INT maxx, INT miny, INT maxy) {
	INT x, y, g;
	if (! find_any_solution (a, b, c, x, y, g))
		return 0;
	a /= g;  b /= g;

	INT sign_a = a>0 ? +1 : -1;
	INT sign_b = b>0 ? +1 : -1;

	shift_solution (x, y, a, b, (minx - x) / b);
	if (x < minx)
		shift_solution (x, y, a, b, sign_b);
	if (x > maxx)
		return 0;
	INT lx1 = x;

	shift_solution (x, y, a, b, (maxx - x) / b);
	if (x > maxx)
		shift_solution (x, y, a, b, -sign_b);
	INT rx1 = x;

	shift_solution (x, y, a, b, - (miny - y) / a);
	if (y < miny)
		shift_solution (x, y, a, b, -sign_a);
	if (y > maxy)
		return 0;
	INT lx2 = x;

	shift_solution (x, y, a, b, - (maxy - y) / a);
	if (y > maxy)
		shift_solution (x, y, a, b, sign_a);
	INT rx2 = x;

	if (lx2 > rx2)
		swap (lx2, rx2);
	INT lx = max (lx1, lx2);
	INT rx = min (rx1, rx2);

	return (rx - lx) / abs(b) + 1;
}


int main() {
  ios::sync_with_stdio(false);

  INT A, B, C, x1, x2, y1, y2;
  cin >> A >> B >> C >> x1 >> x2 >> y1 >> y2;

  if(x2 < x1) swap(x1, x2);
  if(y2 < y1) swap(y2, y1);

  INT result;

  if(A == 0 && B == 0 && C == 0) {
    result = (x2-x1 + 1) * (y2 - y1 + 1);
  } else if(A == 0 && B == 0) {
    result = 0;
  } else if(A == 0) {
    // By = C
    INT y = C / B;
    if(C % B == 0 && y1 <= y && y <= y2) {
      result = x2 - x1 + 1;
    } else {
      result = 0;
    }
  } else if(B == 0) {
    // AX = C
    INT x = C / A;
    if(C % A == 0 && x1 <= x && x <= x2) {
      result = y2 - y1 + 1;
    } else {
      result = 0;
    }
  } else {
    C = -C;
    result = find_all_solutions(A, B, C, x1, x2, y1, y2);
  }

  cout << result;

  return 0;
}
