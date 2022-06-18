#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N, A_time[200009], B_time[200009];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A_time[i]; 
  for(int i = 1; i <= N; i++) cin >> B_time[i];

  double sum = 0.0;

  for (int i = 1; i <= N; i++){
    sum += ((1.0 * A_time[i] * 2 / 6) + (1.0 * B_time[i] * 4 / 6));
  }
  cout << fixed << setprecision(12) << sum << endl;
  return 0;
}