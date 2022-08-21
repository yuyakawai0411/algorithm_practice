#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// N=頂点の数、M=辺の数
int N, M; 
int A[100009], B[100009]; // 辺の情報をもとに、隣接する頂点を記憶する
vector<int> G[100009]; //隣接リスト

int main()
{
  cin >> N >> M;
  // 隣接リストの作成
  // 辺の数まで頂点同士の連結部分を入力
  for (int i = 1; i <= M; i++){
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  int count_array = 0;
  for (int i = 1; i <= N; i++){
    int count = 0;
    for (int j = 0; j < G[i].size(); j++){
      if (i > G[i][j]) count += 1;
    }
    if (count == 1) count_array += 1; 
  }

  cout << count_array << endl;
  return 0;
}