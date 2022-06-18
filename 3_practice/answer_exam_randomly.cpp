#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N;
  double Choices[50], Benefits[50];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> Choices[i] >> Benefits[i];

  double sum = 0.0;

  for (int i = 1; i <= N; i++){
    // 整数同士の計算だと、小数が切り捨てられる
    sum += (1.0 * Benefits[i]) / (1.0 * Choices[i]);
  }
  cout << fixed << setprecision(12) << sum << endl;
  // %.12lf\n=小数点第12までdouble型(lf)で表示
  // printf("%.12lf\n", B_sum + R_sum);
  return 0;
}