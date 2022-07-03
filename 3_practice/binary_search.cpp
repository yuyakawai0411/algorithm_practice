#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long N, X, A[100000];

  cin >> N >> X;
  for (int i = 1; i <=N; i++) cin >> A[i];
  sort(A, A + N + 1);

  int left = 1, right = N;
  while (left <= right){
    int mid = (left + right) / 2;
    if (A[mid] == X) { cout << "Yes" << endl; return 0; }
    if (A[mid] > X) right = mid - 1;
    if (A[mid] < X) left = mid + 1;
  }

  cout << "No" << endl;
	return 0;
}