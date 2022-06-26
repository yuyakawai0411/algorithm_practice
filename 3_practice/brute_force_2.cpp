#include <iostream>
using namespace std;

int main()
{
  int N, S, A[69];
  bool dp[69][10009];

  cin >> N >> S;
  for(int i = 1; i <= N; i++) cin >> A[i];
  // 初期化
  dp[0][0] = true;
  for(int i = 1; i <= S; i++) dp[0][i] = false;

  for(int i = 1; i <= N; i++){
    for(int j = 0; j <= S; j++){
      if(j < A[i]) dp[i][j] = dp[i-1][j];
      if(j >= A[i]){
        if(dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true; 
        else dp[i][j] = false;
      }
    }
  }

  if (dp[N][S] == true) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}