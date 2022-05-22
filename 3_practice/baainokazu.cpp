#include <iostream>
using namespace std;

int main()
{
  long long N, A[100];
  long long Answer;
  long long red = 0, blow = 0, green = 0;
  cin >> N;
  for (int i = 0; i <= N; i++){
    cin >> A[i];
  }
  for (int i = 1; i <= N; i++){
    if (A[i] == 1) red += 1;
    if (A[i] == 2) blow += 1;
    if (A[i] == 3) green += 1;
  }
  Answer = ((red*(red - 1)) / 2) + ((blow*(blow - 1)) / 2) + ((green*(green - 1)) / 2);
  cout << Answer << endl;
}