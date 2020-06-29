/*
  AtCoder Beginner Contest 024
  A - 動物園

  方針
    まず割引なしの値段を考えた後、割引が適用される人数であれば、人数分の
    割引を行う。

  実装
    特なし。
*/

#include<iostream>
using namespace std;

int A, B, C, K;
int S, T;

int main() {
  scanf("%d%d%d%d%d%d", &A, &B, &C, &K, &S, &T);

  int ans = A * S + B * T;
  if (S + T >= K) ans -= C * (S + T);

  printf("%d\n", ans);
  return 0;
}