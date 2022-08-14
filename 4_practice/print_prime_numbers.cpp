#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  bool prime[100000009];

  cin >> N;
  for (int i = 2; i <= N; i++) prime[i] = true;

  for (int i = 2; i*i <= N; i++){
    if (prime[i] = true){
      // x=2*iとすることで、
       // 今選択している自分自身をfalseにしないようにする
       // 倍数にチェックを入れるので、今選択している自分自身*2が次の数字になる
      for (int x = 2*i; x <= N; x+=i) prime[i] = false;
    }
  }

  for (int i = 2; i <= N; i++){
    if (prime[i] == true) cout << i << endl;
  }
  return 0;
}
