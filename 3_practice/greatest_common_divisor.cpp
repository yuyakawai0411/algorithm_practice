#include <iostream>
using namespace std;

// O(2*min(A,B))
// long long GCD(long long A, long long B){
//   long long answer = 0;
//   for (long long i = 1; i <= min(A, B); i++){
//     if (A % i == 0 && B % i == 0) answer = i;
//   }
//   return answer;
// }
// O(log(A+B))に修正
long long GCD(long long A, long long B){
  while( A >= 1 && B >= 1){
    if (A < B) B = B % A;
    else A = A % B;
  }
  if (A >= 1) return A;
  return B;
}

int main()
{
  long long A, B;
  cin >> A >> B;
  cout << GCD(A,B) << endl;
}