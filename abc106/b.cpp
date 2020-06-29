/*
  AtCoder Beginner Contest 106
  B - 105

  方針
    1. 全探索
    2. 手計算して列挙

  実装
    今回は方針1を採用する。
    奇数であることに注意すれば、ループの回数を減らせる。
*/

#include<iostream>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  if (N < 3) printf("0\n");
  else {
    int ans = 0;

    for (int i = 3; i <= N; i += 2) {
      int cnt = 0;
      for (int j = 1; j <= i; j += 2) {
        if (i % j == 0) ++cnt;
      }

      if (cnt == 8) ++ans;
    }

    printf("%d\n", ans);
  }
  return 0;
}
