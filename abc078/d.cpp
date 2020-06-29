/*
  AtCoder Beginner Contest 078
  D - ABS

  方針
    最後に引いたカードが最終的なスコアになる。
    
    N >= 2 の場合は、Xさんが初手で行うべき操作は以下の2通りのみである。
    (1) すべてのカードを引く
    (2) 1枚だけ残してカードを引く

    なぜならば、Xさんはできるだけスコアを大きくしたいため、中途半端なと
    ころまでカードを引いてしまった場合、Yさんにスコアを小さくするように
    されてしまう可能性があるからです。

  実装
    上述の方針より、Xさんの行うべき2つのパターンのうち、スコアが大きく
    なる方をXさんが選択すればよい。
*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int N, Z, W;
vector<int> a;

int main() {
  scanf("%d %d %d", &N, &Z, &W);
  a = vector<int>(N+1);
  for (int i = 1; i <= N; ++i) scanf("%d", &a[i]);

  if (N == 1) printf("%d\n", abs(a[1] - W));
  else printf("%d\n", max(abs(a[N] - W), abs(a[N] - a[N-1])));
  return 0;
}