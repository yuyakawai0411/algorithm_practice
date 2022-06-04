#include <iostream>
using namespace std;

int main()
{
  long long N, count = 0;
  cin >> N;
  // O(N)
  // for (long long i = 2; i <= N; i++){
  //   while(N % i == 0){
  //     N = N / i;
  //     cout << i << " ";
  //   }
  // }
  // O(√N)に改良
  for (long long i = 2; i * i <= N; i++){
    while(N % i == 0){
      N = N / i;
      cout << i << " ";
    }
  }
  if(N >= 2){
    cout << N << endl;
  }
}