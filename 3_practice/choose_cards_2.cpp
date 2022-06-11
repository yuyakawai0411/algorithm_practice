#include <iostream>
using namespace std;

int main()
{
  long long N, A[500000];
  long long count = 0;
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  //全探査
  for(long long i = 1; i <= N; i++){
    for(long long j = i + 1 ; j <= N; j++){
      for(long long k = j + 1; k <= N; k++){
        for(long long l = k + 1; l <= N; l++){
          for(long long m = l + 1; m <= N; m++){
            if ((A[i] + A[j] + A[k] + A[l] + A[m]) == 1000) count += 1;
          }
        }
      } 
    }
  }

  cout << count << endl;
}
