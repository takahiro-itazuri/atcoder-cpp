/*
  AtCoder Beginner Contest 106
  A - Garden

  方針
    全体の面積から道の面積を引く。

  実装
    道の重複部分に注意する。
*/

#include<iostream>
using namespace std;

int A, B;

int main() {
  scanf("%d%d", &A, &B);
  printf("%d\n", A * B - (A + B - 1));
  return 0;
}
