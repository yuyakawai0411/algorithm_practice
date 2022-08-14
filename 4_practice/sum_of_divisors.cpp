#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long N;
long long A[10000009];
long long Answer = 0;

int main()
{
  cin >> N;

  for (int i = 1; i <= N; i++) A[i] = 0;

  for (int i = 1; i <= N; i++){
    for (int j = i; j <= N; j+=i) A[j] += 1; 
  }

  for (int i = 1; i <= N; i++){
    Answer += 1LL * i * A[i];
  }
  cout << Answer << endl;
  return 0;
}
