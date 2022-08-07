#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  double A,B,H,M;
  cin >> A >> B >> H >> M;

  // M <= 60のため、0.5 * 60 = 30となる
  int H_angle = 360.0 / (60 * 12) * M + 30.0 * H;
  int M_angle = 360.0 / 60 * M;
  // 度数法→ラジアンに変換 変換する理由は以下参照
  // https://www.ajimatics.com/entry/2021/03/14/235741
  double radian = (1 / 360.0) * 2 * M_PI;
  double xa = A * sin(H_angle * radian), ya = A * cos(H_angle * radian);
  double xb = B * sin(M_angle * radian), yb = B * cos(M_angle * radian);

  double distance = sqrt((xa-xb) * (xa-xb) + (ya - yb) * (ya - yb));

  printf("%.12lf\n", distance);
	return 0;
}