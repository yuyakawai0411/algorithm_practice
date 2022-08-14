#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N, B[100009];
  int Q, L[100009], R[100009], X[100009];

  cin >> N >> Q;
  for (int i = 1; i <= Q; i++){
    cin >> L[i] >> R[i] >> X[i];
    B[L[i]] += X[i];
    B[R[i]+1] -= X[i];
  }

  for (int j = 2; j <= N; j++){
    if (B[j] > 0) cout << '<';
    if (B[j] < 0) cout << '>';
    if (B[j] == 0) cout << '=';
  }
  cout << endl;
  return 0;
}