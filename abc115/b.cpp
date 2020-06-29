/*
  AtCoder Beginner Contest 115
  B - Christmas Eve Eve

  方針
    一番高い品物の値段を保持して、後からその半額を引く。

  実装
    特になし。
*/


#include<iostream>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int buf;
  int sum = 0;
  int maxval = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &buf);
    sum += buf;
    if (buf > maxval) maxval = buf;
  }

  printf("%d\n", sum - maxval / 2);
  return 0;
}
