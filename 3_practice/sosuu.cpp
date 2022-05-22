#include <iostream>
using namespace std;

bool inspect(int n){
  for (int i = 2; i * i <= n; i++){
    while (n % i == 0){
      n = n / i; 
      cout << i << endl;
    }
  }
  if (n >=2) cout << n << endl;
}

int main()
{
  int n; 
  cin >> n;
  inspect(n);
}