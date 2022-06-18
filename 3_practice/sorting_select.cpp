#include <iostream>
using namespace std;

int main()
{
  int N, A[200000];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  // 選択ソート
  for(int i = 1; i <= N - 1 ; i++){
    int Min_index = i, Min_value = A[i];
    for(int j = i + 1; j <= N; j++){
      if(Min_value > A[j]){
        Min_index = j;
        Min_value = A[j];
      }
    }
    swap(A[i], A[Min_index]);
  }
  for (int i = 1; i <= N; i++) cout << A[i] << endl;
  return 0;
}