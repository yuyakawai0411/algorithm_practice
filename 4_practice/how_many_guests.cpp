#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N, A[100009], B[100009];
  int Q, L[100009], R[100009];

  cin >> N >> Q;
  for (int i=1; i<=N; i++) cin >> A[i];
  for (int j=1; j<=Q; j++) cin >> L[j] >> R[j];
  
  // N(NQ)の計算量がかかる
  // for (int i = 1; i <=Q; i++)
  // {
  //   int sum = 0;
  //   for (int start = L[i]; start <= R[i]; start++){
  //     sum = sum + A[start];
  //   }
  //   cout << sum << endl; 
  // }

  // N(N+Q)の計算量ですむ
  B[0] = 0;
  for (int i=1; i<=N; i++) B[i] = B[i-1] + A[i];
  for (int j=1; j<=Q; j++) cout << B[R[j]] - B[L[j]-1] << endl;
  return 0; 
}