#include <iostream>
using namespace std;

long long GCD(long long A, long long B){
  while( A >= 1 && B >= 1){
    if (A < B) B = B % A;
    else A = A % B;
  }
  if (A >= 1) return A;
  return B;
}

int main()
{
  long long N, A[100009];
  cin >> N;
  for (long long i = 1; i <= N; i++) cin >> A[i];

  // for (long long i = 1; i <= N - 1; i++){
  //   A[i+1] = GCD(A[i],A[i+1]);
  // }

  // こっちの方がわかりやすい
  long long R = GCD(A[1], A[2]);
  for (long long i = 3; i <= N ; i++){
    R = GCD(R,A[i]);
  }
  
  // cout << A[N] << endl;
  cout << R << endl;
  return 0;
}