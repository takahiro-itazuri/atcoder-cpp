/*
  AtCoder Beginner Contest 109
  C - Skip

  方針
    移動できる距離はDと決まっているので、初期位置Xに対して、移動できる位置は
    X+nD（nは整数）のみである。したがって、N個の都市と初期位置までの距離が
    Dの倍数にならなければならない。

    このとき、Dを最大化するため、DはN個の都市と初期位置の間の距離の最大公約数
    であることがわかる。
  
  実装
    最大公約数を計算する。
*/

#include<iostream>
using namespace std;

int N, X, x;

int get_dist(int a, int b) {
  if (a >= b) return a - b;
  else return b - a;
}

template <typename T>
T gcd(T a, T b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while(b != 0) {
    a %= b;
    if (a == 0) return b;
    b %= a;
  }
  return a;
}

int main() {
  scanf("%d%d", &N, &X);

  int ans = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &x);
    int dist = get_dist(X, x);
    if (i == 0) ans = 0;
    ans = gcd(ans, dist);
  }
  
  printf("%d\n", ans);
  return 0;
}
