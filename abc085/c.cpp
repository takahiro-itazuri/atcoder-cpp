/*
  AtCoder Beginner Contest 085
  C - Otoshidama
*/

#include<iostream>
using namespace std;

int N, Y;

int main() {
  scanf("%d%d", &N, &Y);

  // 最小枚数
  int x, y, z;
  x = Y / 10000;
  Y -= 10000 * max(x, 0);
  y = Y / 5000;
  Y -= 5000 * max(y, 0);
  z = Y / 1000;

  while (x + y + z < N) {
    if (N - (x + y + z) >= 4 && y > 0) {
      y -= 1;
      z += 5;
    }
    else if (N - (x + y + z) >= 1 && x > 0) {
      x -= 1;
      y += 2;
    }
    else break;
  }

  if (x + y + z == N) printf("%d %d %d\n", x, y, z);
  else printf("-1 -1 -1\n");
  return 0;
}