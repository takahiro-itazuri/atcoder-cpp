/*
  AtCoder Beginner Contest 078
  C - HSI

  方針
    Mケースがすべて正解するには、2^M回の試行が必要であり、1回ごとに
    1900 * M + 100 * (N - M) [ms]の時間が必要となる。

    ans = 2^M * (1900 * M + 100 * (N - M))

  実装
    上述の通り。
*/

#include<iostream>
#include<cmath>
using namespace std;

int N, M;

int main() {
  scanf("%d %d", &N, &M);
  
  int times = (int)(pow(2, M) + 0.5);

  printf("%d\n", times * (1900 * M + 100 * (N - M)));
  return 0;
}