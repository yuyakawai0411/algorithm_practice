#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N, B[100009], R[100009];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> B[i];
  for(int i = 1; i <= N; i++) cin >> R[i];

  double B_sum = 0.0, R_sum = 0.0;

  for (int i = 1; i <= N; i++){
    B_sum += 1.0 * B[i] / N;
    R_sum += 1.0 * R[i] / N;
  }
  cout << fixed << setprecision(12) << B_sum + R_sum << endl;
  // %.12lf\n=小数点第12までdouble型(lf)で表示
  // printf("%.12lf\n", B_sum + R_sum);
  return 0;
}