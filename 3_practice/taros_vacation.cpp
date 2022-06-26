#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long N, A[500000];
  // dp1=i日目に勉強する、dp2=i日目に勉強しない
  long long dp1[500000], dp2[500000];

  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  // 初期化
  dp1[0] = 0;
  dp2[0] = 0;

  for(int i = 1; i <= N; i++){
    // i日目に勉強するので、i-1日目に勉強しない勉強成果の最大値 + i日目の勉強成果
    dp1[i] = dp2[i-1] + A[i];
    // i日目に勉強しないので、i-1日目に勉強した時の最大値 or i-2日目に勉強した時の最大値
    dp2[i] = max(dp1[i-1], dp2[i-1]);
  }
  // 最終日に勉強した方が成果が高いか否か？
  cout << max(dp1[N], dp2[N]) << endl;
	return 0;
}