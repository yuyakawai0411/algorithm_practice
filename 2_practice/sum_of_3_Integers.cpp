#include <iostream>
using namespace std;

int main()
{
  int A[3], answer;

  for(int i = 1; i <= 3; i++) cin >> A[i];

  answer = A[1] + A[2] + A[3];

  cout << answer << endl;
}