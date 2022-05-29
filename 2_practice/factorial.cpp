#include <iostream>
using namespace std;

int main()
{
  long long N, answer = 1;

  cin >> N;
  for (int i = 2; i <= N; i++){
    answer *= i;
  }
  cout << answer << endl;
}