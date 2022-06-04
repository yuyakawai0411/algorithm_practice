#include <iostream>
using namespace std;

long long GCD(long long A, long long B){
  long long answer = 0;
  for (long long i = 1; i <= min(A, B); i++){
    if (A % i == 0 && B % i == 0) answer = i;
  }
  return answer;
}

int main()
{
  long long A, B;
  cin >> A >> B;
  cout << GCD(A,B) << endl;
}