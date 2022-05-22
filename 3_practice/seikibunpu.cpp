#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int N = 1000000;
  int M = 0;
  for (int i = 1; i <= N; i++){
    double px = 6.0 * rand() / (double)RAND_MAX;
    double py = 9.0 * rand() / (double)RAND_MAX;
    double dist_33 = sqrt((px - 3.0) * (px - 3.0) + (py - 3.0) * (py - 3.0));
    double dist_37 = sqrt((px - 3.0) * (px - 3.0) + (py - 7.0) * (py - 7.0));
    if (dist_33 <= 3.0 || dist_37 <= 2.0) {
      M += 1;
    }
  }
  cout << M << endl;
  return 0;
}

