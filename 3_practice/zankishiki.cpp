#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N;      //足場の数
int dp[10]; //使った体力

int main(){
  cin >> N;
  // for (int i = 0; i <= N; i++) cin >> H[i];

  for (int i = 0; i <= N; i++){
    if(i <= 1) dp[i] = 1;
    else dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[N] << endl;
  }
}