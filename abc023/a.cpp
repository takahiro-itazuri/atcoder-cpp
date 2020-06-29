/*
  AtCoder Beginner Contest 023
  A - 加算王

  方針
    1の位と10の位の足し算をする。

  実装
    剰余演算子と整数型同士の割り算の性質を利用する。
*/

#include<iostream>
using namespace std;

int X;

int main() {
  scanf("%d", &X);
  printf("%d\n", X % 10 + X / 10);
  return 0;
}