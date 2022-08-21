#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// N=頂点の数、M=辺の数
int N, M; 
int A[100009], B[100009]; // 辺の情報をもとに、隣接する頂点を記憶する
vector<int> G[100009]; //隣接リスト
bool visited[100009]; // 頂点に訪れたか否か

void dfs(int point)
{
  visited[point] = true; // trueは訪れたという意味
  for (int i : G[point]){
    if (visited[i] == false) dfs(i);
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
  dfs(1);

  // 連結か否かを出力(全ての頂点がtrueか)
  bool Answer = true;
  for (int i = 1; i <= N; i++){
    if (visited[i] == false) Answer = false;
  }
  if (Answer == true) cout << "The graph is connected." << endl;
  else cout << "The graph is not connected." << endl;
  return 0;
}
