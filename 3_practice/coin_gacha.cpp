#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N;
  cin >> N;

  double answer = 0.0;

  for (int i = N; i >= 1; i--){
    // k=現在所有しているコインの種類
    // 1個新しい種類をゲットするのに、N / (N-k)の期待値が必要
    answer += 1.0 * N /i;
  }
  cout << fixed << setprecision(12) << answer << endl;
  return 0;
}