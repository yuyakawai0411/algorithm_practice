#include <iostream>
using namespace std;

int main()
{
  int N, A[100];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 1; i <= N -1 ; i++){
    int Min = i, Min_value = A[i];
    for (int j = i + 1; j <= N; j++){
      if (Min_value > A[j]){
        Min = j;          //配列のindex
        Min_value = A[j]; //配列の中身
      }
    }
    swap(A[i], A[Min]);
  }
  for (int i = 1; i <= N; i++) cout << A[i] << endl;
  return 0;
}
