/*
  AtCoder Beginner Contest 115
  C - Christmas Eve

  方針
    木の高さでソートしておき、K本離れた木の高さの差が最小になるところを探索する。

  実装
    特になし。
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int N, K;
  scanf("%d %d", &N, &K);
  vector<int> h(N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &h[i]);
  }
  
  sort(h.begin(), h.end());

  int minval = 1e9;
  for (int i = 0; i + K - 1 < N; ++i) {
    int val = h[i + K - 1] - h[i];
    if (val < minval) minval = val;
  }

  printf("%d\n", minval);
  return 0;
}
