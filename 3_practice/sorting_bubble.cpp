#include <iostream>
using namespace std;

int main()
{
  int N, A[2000];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  // バブルソート
  for(int i = 1; i <= N ; i++){
    for(int j = i + 1; j <= N; j++){
      if(A[i] > A[j]){
        int swap = A[i];
        A[i] = A[j];
        A[j] = swap;
      }
    }
  }
  for (int i = 1; i <= N; i++) cout << A[i] << endl;
  return 0;
}