#include <iostream>
using namespace std;

int main()
{
  int N, A[100000], dp[100000];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 1; i <= N ; i++){
    if(i==1) dp[i] = 0;
    if(i==2) dp[i] = abs(A[i-1]-A[i]);
    if(i>=3){
      int a = dp[i-1] + abs(A[i-1]-A[i]);
      int b = dp[i-2] + abs(A[i-2]-A[i]);
      dp[i] = min(a,b);
    }
  }
  cout << dp[N] << endl;
  return 0;
}