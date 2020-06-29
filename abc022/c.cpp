/*
  AtCoder Beginner Contest 022
  C - Blue Bird

  方針
    頂点1を含む最短閉路（最短経路ではない）を求める問題である。
    
    最短経路を求める問題はいくつか存在するため、最短閉路問題を
    最短経路問題に落とし込むことを考える。今回のように頂点1を
    必ず含むことがわかっている場合、頂点1に隣接する異なる2点が
    与えられた場合、その2点をつなぐ頂点1を通らない最短経路問題
    に帰着させることができる。

    頂点1に隣接する頂点の個数はO(N)であるため、隣接する2点の
    選び方の個数はO(N^2)である。

    選択された頂点1に隣接する2点に対して、Dijkstra法を用い
    ると、O(N^2)の計算量が必要となる。今回のような同じグラフ
    に対して、最短経路問題を何度も解くような場合は、全点対の
    最短経路を事前計算するWarshall-Floyd法を用いれば、その
    事前計算にO(N^3)、その後任意の2点が与えられた時に、最短
    経路を得るのにO(1)で実行できる。

  実装

*/

#include<iostream>
#include<vector>
#include<queue>
#include<limits>
using namespace std;

const int mod = 1e9 + 7;

int N, M, u, v, l;
vector<vector<int>> d;

void floyd_warshall() {
  for (int k = 1; k <= N; ++k) {
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= N; ++j) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  } 
}

int main() {
  scanf("%d%d", &N, &M);

  d = vector<vector<int>>(N+1, vector<int>(N+1, mod));
  for (int i = 1; i <= N; ++i) d[i][i] = 0;
  
  vector<pair<int,int>> adj;
  for (int m = 0; m < M; ++m) {
    scanf("%d%d%d", &u, &v, &l);

    if (u == 1) adj.push_back(make_pair(v, l));
    else {
      d[u][v] = l;
      d[v][u] = l;
    }
  }

  floyd_warshall();

  int minval = mod;
  for (int i = 0; i < adj.size(); ++i) {
    for (int j = 0; j < adj.size(); ++j) {
      if (i == j) continue;

      minval = min(minval, d[adj[i].first][adj[j].first] + adj[i].second + adj[j].second);
    }
  }

  if (minval == mod) printf("-1\n");
  else printf("%d\n", minval);
  return 0;
}