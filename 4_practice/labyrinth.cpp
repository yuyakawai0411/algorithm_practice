#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

int H, W;        // H=迷路の縦マス数、Y=迷路の横マス数
int sx,sy,start; // s=迷路のスタート座標, start=スタートの頂点番号 start = sx × H + sy
int gx,gy,goal;  // g=迷路のゴール座標, goal = gx × W + gy
char c[59][59]; //迷路の中身

vector<int> G[2509]; // 隣接頂点リスト
int dist[2509]; // 経路カウントリスト

int main()
{
  // 入力
  cin >> H >> W;
  cin >> sx >> sy; start = sx * W + sy;
  cin >> gx >> gy; goal = gx * W + gy;
  for (int i = 1; i <= H; i++){
    for (int j = 1; j <= W; j++) cin >> c[i][j];
  }

  // 隣接リスト表
  // 横方向への移動が可能か？
  for (int i=1; i<=H; i++){
    for (int j=1; j<=W-1; j++){
      int base_point = i * W + j;      // (i,j)の頂点番号
      int moved_point = i * W + (j+1); // (i,j+1)の頂点番号
      if (c[i][j] == '.' && c[i][j+1] == '.'){
        G[base_point].push_back(moved_point);
        G[moved_point].push_back(base_point);
      }
    }
  }
  // 縦方向への移動が可能か？
  for (int i=1; i<=H-1; i++){
    for (int j=1; j<=W; j++){
      int base_point = i * W + j;      // (i,j)の頂点番号
      int moved_point = (i+1) * W + j; // (i,j+1)の頂点番号
      if (c[i][j] == '.' && c[i+1][j] == '.'){
        G[base_point].push_back(moved_point);
        G[moved_point].push_back(base_point);
      }
    }
  }

  // 塗りつぶしリスト初期化
  for (int i = 1; i <= H * W; i++) dist[i] = -1; // -1は塗りつぶしていないという意味
  queue<int> Q;
  Q.push(start); dist[start] = 0; // キューイングし、塗りつぶす

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

  // スタートからゴールまでの最短距離を出力
  cout <<  dist[goal] << endl;
  return 0;
}
