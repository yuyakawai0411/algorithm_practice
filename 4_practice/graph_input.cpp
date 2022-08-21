#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// N=頂点の数、M=辺の数
int N, M; 
int A[100009], B[100009];
vector<int> G[100009];

int main()
{
  cin >> N >> M;
  // 辺の数まで頂点同士の連結部分を入力
  for (int i = 1; i <= M; i++){
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  // 出力
  for (int i = 1; i <= N; i++){
    cout << i << ":{";
    for (int j = 0; j <(int)G[i].size(); j++){
      if (j >= 1) cout << ",";
      cout << G[i][j];
    }
    cout << "}" << endl;
  }
  return 0;
}
