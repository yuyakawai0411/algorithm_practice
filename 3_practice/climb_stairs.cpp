#include <iostream>
using namespace std;

int main()
{
  int N, dp[45];
  cin >> N;

  // for(int i; i <= N - 1; i++){
  //   sum = sum * 2;
  // }

  // cout << sum - 1 << endl;

  //動的計画法で解く 計算量O(N)
  for(int i = 0; i <= N; i++){
    if(i<=1) dp[i] = 1;
    else{
      dp[i] = dp[i-1] + dp[i-2];
    }
  }
  cout << dp[N] << endl;
  return 0;
}