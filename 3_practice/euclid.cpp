#include <iostream>
using namespace std;

// 最大公約数の計算
int GCD(int A, int B){
  int prior_A = A;
  int prior_B = B;
  while(A >= 1 && B >= 1){
    if(A > B) A = A % B;  
    else B = B % A;
  }
  if (A >= 1) return A;
  return B;
}

//　最小公倍数の計算
int LCM(int A, int B){
  return (A * B) / GCD(A ,B);
}

int main()
{
  int N;
  int A[10];
  cin >> N;

  for(int i = 1; i <= N; i++){
    cin >> A[i];
  }
  // 最小公倍数
  int R = LCM(A[1], A[2]);
  for (int i = 3; i <= N; i++){
    LCM(R, A[i]);
  }
  cout << R << endl;
}