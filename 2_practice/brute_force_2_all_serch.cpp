// bit全探査
#include <iostream>
using namespace std;

long long N, S, A[61];

int main() {
  // N=データ数, S=目的の値
	cin >> N >> S;
	for (int i = 1; i <= N; i++) cin >> A[i];
  // 1LL = 00000000 00000001 1をlong long型で表せ
  // 0LL = 00000000 00000000 0をlong long型で表せ
	for (long long i = 0; i < (1LL << N); i++) {
		long long sum = 0;
		for (int j = 1; j <= N; j++) {
      // &=ビット演算,&&=かつ
			if ((i & (1LL << (j-1))) != 0LL) sum += A[j];
		}
		if (sum == S) { cout << "Yes" << endl; return 0; }
	}
	cout << "No" << endl;
	return 0;
}