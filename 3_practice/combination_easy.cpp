#include <iostream>
using namespace std;

int main()
{
  long long N, R;
  long long sum_N = 1, sum_R = 1, sum_NR = 1;
  cin >> N >> R;
  // ややこしい計算方法
  // for (int i = 1; i <= R -1; i++){
  //   sum_N = sum_N * (N - i);
  // }
  // for (int i = 1; i <= R; i++){
  //   sum_R = sum_R * i;
  // }

  // こっちの方がわかりやすくていい
  for (int i = 1; i <= N; i++) sum_N *= i;
  for (int i = 1; i <= R; i++) sum_R *= i;
  for (int i = 1; i <= (N - R); i++) sum_NR *= i;


  cout << sum_N / (sum_R * sum_NR) << endl;
}