/*
  AtCoder Beginner Contest 022
  A - Best Body

  方針
    毎日体重がS以上T以下の範囲にあるかどうかを判定する。

  実装
    特になし。
*/

#include<iostream>
using namespace std;

int N, S, T, W, A;

bool check(int X) {
  return (S <= X && X <= T);
}

int main() {
  scanf("%d%d%d%d", &N, &S, &T, &W);

  int cnt = check(W) ? 1 : 0;
  for (int i = 2; i <= N; ++i) {
    scanf("%d", &A);
    W += A;
    cnt += check(W) ? 1 : 0;
  }

  printf("%d\n", cnt);
  return 0;
}