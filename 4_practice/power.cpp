#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 long long mod = 1000000007;
 long long a, b, Answer = 1;

int main()
{
  // これでは間に合わない
  cin >> a >> b;
  for(int i=1; i<=b; i++){
    Answer = (Answer * a) % mod;
  }
  a[1] = 1; a[2] = 1;;
  return 0;
}
