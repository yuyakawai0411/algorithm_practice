#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// N=頂点の数、M=辺の数
int N, M; 
int A[200009], B[200009]; // 辺の情報をもとに、隣接する頂点を記憶する
vector<int> G[200009]; //隣接リスト
// color=0 訪れていない, color=1 赤色, color=2 青色
int color[200009]; // 各種頂点の色

void dfs(int point)
{
  for (int i : G[point]){
    if (color[i] == 0) {
      color[i] = 3 - color[point];
      dfs(i);
    }
  }
}

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

  // 深さ探査
  for (int i = 1; i <= N; i++) color[i] = 0;
  for (int i = 1; i <= N; i++){
    if (color[i] == 0) {
      color[i] = 1;
      dfs(i);
    }
  }

  // 2部グラフで書けるかを出力
  bool Answer = true;
  for (int i = 1; i <= M; i++){
    if (color[A[i]] == color[B[i]]) Answer = false; // 入力した辺の頂点が違いに同じ色であれば2部グラフではない
  }
  if (Answer == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
