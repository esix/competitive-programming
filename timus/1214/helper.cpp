#include <math.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  long x, y;
  cin >> x >> y;
  int i, j;
  if (x>0 && y>0)
  {
    for (i = 1; i <= x+y; i++)
    {
      y = x*x+y;
      x = x*x+y;
      y = sqrt(x+(y/labs(y))*(-labs(y)));
      for (j = 1; j <= 2*y; j++)
        x = x-y;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}
