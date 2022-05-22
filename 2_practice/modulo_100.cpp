#include <iostream>
using namespace std;

int main()
{
  int A[100], N, sum = 0, answer;

  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];

  for(int i = 1; i <= N; i++){
    sum = sum + A[i];
  }
  answer = sum % 100;

  cout << answer << endl;
}