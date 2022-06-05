#include <iostream>
using namespace std;
//最大公約数
long long GCD(long long A, long long B){
  while( A >= 1 && B >= 1){
    if (A < B) B = B % A;
    else A = A % B;
  }
  if (A >= 1) return A;
  return B;
}

// 最小公倍数
long long LCM(long long A, long long B){
  return (A / GCD(A,B)) * B;
  
  // return A * B / GCD(A,B);
}

int main()
{
  long long N, A[100009];
  cin >> N;
  for (long long i = 1; i <= N; i++) cin >> A[i];

  long long R = LCM(A[1], A[2]);
  for (long long i = 3; i <= N ; i++){
     // 最小公倍数と次の数を比較していけばいい
    R = LCM(R,A[i]);
  }
  
  cout << R << endl;
  return 0;
}