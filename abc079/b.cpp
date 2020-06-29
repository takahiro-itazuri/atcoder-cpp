/*
  AtCoder Beginner Contest 079
  B - Lucas Number

  方針
    順番通りに実行すればよい。

  実装
    long longにすることに気をつける。
*/

#include<iostream>
using namespace std;

int N;

int main() {
  scanf("%d", &N);

  long long L0 = 2, L1 = 1;
  for (int i = 2; i <= N; ++i) {
    long long L2 = L0 + L1;
    L0 = L1;
    L1 = L2;
  }

  printf("%lld\n", L1);
  return 0;
}