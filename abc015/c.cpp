/*
  AtCoder Beginner Contest 015
  C - 高橋くんのバグ探し
*/

#include<iostream>
using namespace std;

int N, K;
int T[5][5];

bool dfs(int x, int n) {
  if (n == N) return (x == 0);
  for (int k = 0; k < K; ++k) {
    if (dfs(x^T[n][k], n+1)) return true;
  }
  return false;
}

int main() {
  scanf("%d%d", &N, &K);
  for (int n = 0; n < N; ++n) for (int k = 0; k < K; ++k) scanf("%d", &T[n][k]);

  if (dfs(0, 0)) printf("Found\n");
  else printf("Nothing\n");
  return 0;
}
