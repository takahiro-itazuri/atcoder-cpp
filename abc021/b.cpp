/*
  AtCoder Beginner Contest 021
  B - 嘘つきの高橋くん

  方針
    最短経路となるような町と道路の構成が１つでも存在する場合、最短経路で
    異動した可能性があると言えることから、経路にループがないかを調べれば
    よいことがわかる。
    したがって、同じ町が2回出てきていないかを探索すればよい。

  実装
    過去に出た町を記憶しておき、既出でないかを判定する。
*/

#include<iostream>
#include<vector>
using namespace std;

int N, a, b, K, P;

int main() {
  scanf("%d%d%d%d", &N, &a, &b, &K);
  vector<bool> flag(N + 1, false);
  flag[a] = true; flag[b] = true;

  for (int k = 0; k < K; ++k) {
    scanf("%d", &P);
    if (flag[P]) {
      printf("NO\n");
      return 0;
    }
    flag[P] = true;
  }

  printf("YES\n");
  return 0;
}