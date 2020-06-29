/*
  AtCoder Beginner Contest 079
  D - Wall

  方針
    マスに書いてある数字Aが1もしくは-1でなければ、1にする必要がある。
    したがって、Aを1に変換する最小のコストを計算すればよい。

  実装
    Warshall-Floyd法を用いて最小コストを計算する。
*/

#include<iostream>
#include<vector>
using namespace std;

int H, W;
vector<vector<int>> cost(10, vector<int>(10));

void floyd_warshall() {
  for (int k = 0; k < 10; ++k) {
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
      }
    }
  }
}

int main() {
  scanf("%d%d", &H, &W);
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      scanf("%d", &cost[i][j]);
    }
  }

  floyd_warshall();

  int total = 0;
  for (int h = 0; h < H; ++h) {
    for (int w = 0; w < W; ++w) {
      int A;
      scanf("%d", &A);

      if (A == -1) continue;
      total += cost[A][1];
    }
  }

  printf("%d\n", total);
  return 0;
}