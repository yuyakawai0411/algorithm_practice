#include <iostream>
using namespace std;

int main()
{
  double  n, a[100], b[100], answer = 0.0;
  double a_time = 0.0, b_time = 0.0, a_time_count = 0, b_time_count = 0;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i] >> b[i];
  }
  for (int i = 1; i <= n; i++){
    double eval = a[i] * (1.0/3.0) + b[i] * (2.0/3.0);
    answer += eval
  }
  answer = ( a_time / a_time_count) + ( b_time / b_time_count);
  cout << answer << endl;
}