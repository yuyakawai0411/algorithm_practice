#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  long long ax,ay,bx,by,cx,cy;
  double Answer = 0.0;
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  // ベクトルの成分表示
    // 角BACの内角を求めるため
  long long BAx = (ax - bx), BAy = (ay - by);
  long long BCx = (cx - bx), BCy = (cy - by);
    // 角CABの内角を求めるため
  long long CAx = (ax - cx), CAy = (ay - cy);
  long long CBx = (bx - cx), CBy = (by - cy);

  // 内角を求める
  int pattern = 2; // 垂線が最も短いケース
  if (BAx * BCx + BAy * BCy < 0LL) pattern = 1;
  if (CAx * CBx + CAy * CBy < 0LL) pattern = 3;

  // 線分の距離を求める
  if (pattern == 1) Answer = sqrt(BAx * BAx + BAy * BAy);
  if (pattern == 3) Answer = sqrt(CAx * CAx + CAy * CAy);
  if (pattern == 2) {
    double S = abs(BAx * BCy - BAy * BCx);
    double BC_length = sqrt(BCx * BCx + BCy * BCy);
    Answer = S / BC_length;
  }

  printf("%.12lf\n", Answer);
	return 0;
}