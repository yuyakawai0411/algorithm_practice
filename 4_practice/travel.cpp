#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  long long N, A[200009];
  long long M, B[200009];
  long long S[200009];
  long long Answer = 0;

  cin >> N;
  for (int i = 1; i <= N - 1; i++) cin >> A[i];
  cin >> M;
  for (int i = 1; i <= M; i++) cin >> B[i];
  // 累積和
  S[1] = 0;
  for (int i = 2; i <= N; i++) S[i] = S[i-1] + A[i-1];
  // 足し算
  for (int i = 1; i <= M-1; i++){
    Answer += abs(S[B[i+1]] - S[B[i]]);
  }

  cout << Answer << endl;
  return 0; 
}