#include <iostream>
using namespace std;

int main()
{
  long long N, A[200009];
  long long cnt[1000009];
  long long Answer = 0;
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  //全探査
  // for(long long i = 1; i <= N; i++){
  //   for(long long j = i + 1 ; j <= N; j++){
  //     if ((A[i] + A[j]) == 100000) count += 1;
  //   }
  // }
  //素早く計算する方法
  //1〜99999数えることができる空配列を作成
  for(int i = 1; i <= 99999; i++) cnt[i] = 0;
  //空配列のインデックスに合うようにA[i]を空配列に代入
  for(int i = 1; i <= N; i++) cnt[A[i]] += 1;

  for(int i = 1; i <= 49999; i++){
    Answer += cnt[i] * cnt[100000 - i];
  }
  Answer += cnt[50000] * (cnt[50000] - 1) / 2;

  cout << Answer << endl;
}