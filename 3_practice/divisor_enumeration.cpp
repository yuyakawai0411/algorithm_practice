#include <iostream>
using namespace std;

int main()
{
  long long N, count = 0;
  cin >> N;
  // O(N)
  // for (long long i = 1; i <= N; i++){
  //   if(N % i == 0){
  //     cout << i << endl;
  //   }
  // }
  // O(√N)に改良
  for (long long i = 1; i * i <= N; i++){
    if(N % i == 0){
      cout << i << endl;
      cout << N / i << endl;
    }
  }
}
