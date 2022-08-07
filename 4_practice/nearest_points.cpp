#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  double x[2009], y[2009];
  double Answer = 1000000000.0;
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> x[i] >> y[i];

  for (int i = 1; i <= N; i++){
    for (int j = i + 1; j <= N; j++){
      double distance = sqrt((x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]));
      Answer = min(Answer, distance);
    };
  };

  printf("%.12lf\n", Answer);
	return 0;
}