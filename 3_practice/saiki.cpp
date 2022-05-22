#include <iostream>
using namespace std;

int func(int N){
  if (N == 1) return 1;
  return func(N -1) * N;
}

int main()
{
  int N, A[100];
  cin >> N;
  cout << func(N) << endl;
  return 0;
}