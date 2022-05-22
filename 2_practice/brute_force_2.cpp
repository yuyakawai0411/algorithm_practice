#include <iostream>
using namespace std;

int main()
{
  int A[10000], N, S, sum = 0;

  cin >> N >> S;
  for(int i = 1; i <= N; i++) cin >> A[i];

  for(int i = 1; i <= N; i++) sum = sum + A[i];
  
  if(sum % S == 0) cout << "yes" << endl;
  else cout << "no" << endl;
}