#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int T, L[500009], R[500009];
  int N;
  int A[500009], B[500009];

  cin >> T >> N;
  for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

  // 階差の配列
  for (int i = 0; i <= T; i++) B[i] = 0;
  for (int i = 1; i <= N; i++)
  {
    B[L[i]] += 1;
    B[R[i]] -= 1;
  }
  
  // 累積和の配列
  A[0] = B[0];
  for (int i = 1; i <= T; i++){
    A[i] = A[i-1] + B[i];
  }

  for (int i = 0; i <= T - 1; i++){
    cout << A[i] << endl;
  }
  return 0; 
}