#include <iostream>
using namespace std;

int main()
{
  int A[100], N, answer = 0;

  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];

  for(int i = 1; i <= N; i++){
    answer = answer + A[i];
  }

  cout << answer << endl;
}