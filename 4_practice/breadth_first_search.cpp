#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
// N=頂点の数、M=辺の数
int N, M; 
int A[100009], B[100009]; // 辺の情報をもとに、隣接する頂点を記憶する
vector<int> G[100009]; //隣接リスト
int dist[100009]; // 頂点の塗りつぶしリスト

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

  // 塗りつぶしリスト初期化
  for (int i = 1; i <= N; i++) dist[i] = -1; // -1は塗りつぶしていないという意味
  queue<int> Q;
  Q.push(1); dist[1] = 0; // キューイングし、塗りつぶす

  // 幅優先探査
  while(!Q.empty()){
    int point = Q.front(); // キューの先頭を変数に保存
    Q.pop(); // キューの先頭をキューから削除

    for (int i=0; i<(int)G[point].size(); i++){
      int nex = G[point][i];
      if (dist[nex] == -1){
        dist[nex] = dist[point] + 1; // 距離を計算
        Q.push(nex); // 経路情報がないところのみキューイング
      }
    }
  }

  // 頂点1から各頂点までの最短距離を出力
  for (int i =1; i <= N; i++) cout << dist[i] << endl;
  return 0;
}
