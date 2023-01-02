#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// N=頂点の数、M=辺の数
int N, a[10000009];

int main()
{
  cin >> N;
  a[1] = 1; a[2] = 1;
  for (int i = 3; i <= N; i++) a[i] = (a[i-1] + a[i-2]) % 1000000007; //先に余りを出すことで、計算量を減らす
  cout << a[N] % 1000000007 << endl;
  return 0;
}
