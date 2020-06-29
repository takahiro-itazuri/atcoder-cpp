/*
  AtCoder Beginner Contest 117
  C - Streamline

  方針
    N >= M の場合、0となる。
    N < M の場合、M個の座標をN個のグループに分ける問題に相当する。
    各グループに割り当てられたコマを、左端に置き右端まで動かすと最短となる。
    各グループ間の間の距離を最大化すれば、移動量を最小化することができる。
    したがって、全ての座標の間の距離を計算し、大きい順に選択すればよい。

  実装
    M個の座標をソートして、それぞれの座標間の距離を計算して、それをさらにソートする。
    大きい方からN-1個を、グループ間の距離として選択する。
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M;
vector<int> X, dist;

int main() {
  scanf("%d %d", &N, &M);
  X = vector<int>(M);
  for (int i = 0; i < M; ++i) scanf("%d", &X[i]);
  
  if (N >= M) {
    printf("0\n");
    return 0;
  }

  sort(X.begin(), X.end());
  for (int i = 0; i < M-1; ++i) dist.push_back(X[i+1] - X[i]);
  sort(dist.begin(), dist.end(), greater<int>());

  int ans = X[M-1] - X[0];
  for (int i = 0; i < N-1; ++i) ans -= dist[i];

  printf("%d\n", ans);
  return 0;
}
