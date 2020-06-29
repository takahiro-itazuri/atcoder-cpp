/*
  AtCoder Beginner Contest 079
  A - Good Integer

  方針
    各桁を順番に見ていく。

  実装
    10進法の場合、10で割って余る数が一番下の桁の数になる。
*/

#include<iostream>
using namespace std;

int N;

int main() {
  scanf("%d", &N);

  int buf = -1;
  int maxcnt = 0;
  int cnt = 0;
  while (N) {
    if (buf == N % 10) cnt++;
    else {
      buf = N % 10;
      cnt = 1;
    }
    maxcnt = max(maxcnt, cnt);
    N /= 10;
  }

  if (maxcnt >= 3) printf("Yes\n");
  else printf("No\n");
  return 0;
}