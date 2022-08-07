#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  // 入力は全て整数
  double x1, y1, r1, x2, y2, r2;
  double d, inside, outside;
  cin >> x1 >> y1 >> r1;
  cin >> x2 >> y2 >> r2; 

  d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  inside = abs(r1 - r2);
  outside = r1 + r2;

  if (d < inside) cout << '1' << endl;
  else if (d == inside) cout << '2' << endl;
  else if (d < outside) cout << '3' << endl;
  else if (d == outside) cout << '4' << endl;
  else if (d > outside) cout << '5' << endl;
	return 0;
}