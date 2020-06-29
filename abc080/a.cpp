/*
  AtCoder Beginner Contest 080
  A - Parking

  方針
    A*NとBの小さい方を出力する。

  実装
    特になし。
*/

#include<iostream>
using namespace std;

int N, A, B;

int main() {
  scanf("%d%d%d", &N, &A, &B);
  printf("%d\n", min(N * A, B));
  return 0;
}
