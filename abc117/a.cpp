/*
  AtCoder Beginner Contest 117
  A - Entrance Examination

  方針
    T/Xを計算する。

  実装
    許容誤差に注意する。
*/

#include<iostream>
using namespace std;

int T, X;

int main() {
  scanf("%d %d", &T, &X);
  printf("%f\n", (double)T / (double)X);
  return 0;
}
