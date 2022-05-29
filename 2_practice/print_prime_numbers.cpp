#include <iostream>
using namespace std;

int main()
{
  long long N, prime[100];
  cin >> N;

  for (int i = 2; i <= N; i++){
    long long count = 0;
    for (int j = 2; j <= i; j++){
     if (i % j == 0) count += 1;
    }
     if (count == 1) {
      cout << " "; 
      cout << i;
     }
  }
}