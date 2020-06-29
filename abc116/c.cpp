/*
  AtCoder Beginner Contest 116
  C - Grand Garden

  方針
    一度の水やりでできるだけ多くの花に水をあげたい。
    「水やりをして花を高くする」という問題の捉え方をするより
    「すでに特定の高さの花があって、特定の高さ以上の高さのあ
    る花が連続する領域がいくつあるかを数え上げる」と捉える方
    がコーディングがしやすい。

  実装
    最大の高さを測っておき、高さ０から最大の高さまでfor文を
    回す。各高さにおいて、その高さ以上の高さをもつ花の連続す
    る領域を数え上げる。
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  vector<int> h(N);
  for (int n = 0; n < N; ++n) scanf("%d", &h[n]);

  int cnt = 0;
  int max_h = *max_element(h.begin(), h.end());
  for (int i = 1; i <= max_h; ++i) {
    bool flag = false;
    for (int n = 0; n < N; ++n) {
      if (!flag && h[n] >= i) {
        ++cnt;
        flag = true;
      }
      else if (flag && h[n] < i) {
        flag = false;
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}
