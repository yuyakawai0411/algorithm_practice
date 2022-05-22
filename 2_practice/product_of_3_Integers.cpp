#include <iostream>
using namespace std;

int main()
{
  int A[3], answer = 1;

  for(int i = 1; i <= 3; i++) cin >> A[i];

  for(int i = 1; i <= 3; i++){
    answer = answer * A[i];
  }

  cout << answer << endl;
}