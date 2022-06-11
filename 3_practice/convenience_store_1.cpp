#include <iostream>
using namespace std;

int main()
{
  long long N, A[200000],count = 0;
  long long a =0, b=0, c=0, d=0;
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  // 全探査
  // for (long long i = 1; i <= N; i++){
  //   int sum = 0;
  //   for (long long j = i +1; j <= N; j++){
  //     sum = A[i] + A[j];
  //     if(sum == 500){
  //       count += 1;
  //     }
  //   }
  // }

  //処理を早くした
  for (long long i = 1; i <= N; i++){
    if (A[i]==100) a+=1;
    if (A[i]==200) b+=1;
    if (A[i]==300) c+=1;
    if (A[i]==400) d+=1;
  }

  cout << (a*d) + (b*c) << endl;
}