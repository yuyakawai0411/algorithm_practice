#include <iostream>
using namespace std;

bool isprime(long long N){
  // O(N)→O(√N)に改良
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
