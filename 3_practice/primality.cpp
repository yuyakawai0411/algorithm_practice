#include <iostream>
using namespace std;

// O(N)
// bool isprime(long long N){
//   for (long long i = 2; i <= N -1; i ++){
//     if(N % i == 0) return false;
//   }
//   return true;
// }

// O(√N)に改良
bool isprime(long long N){
  for (long long i = 2; i * i <= N; i ++){
    if(N % i == 0) return false;
  }
  return true;
}

int main()
{
  long long N, answer;
  cin >> N;

  answer = isprime(N);

  if(answer == 1){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
