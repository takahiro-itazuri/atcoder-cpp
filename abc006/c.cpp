/*
  AtCoder Beginner Contest 006
  C - スフィンクスのなぞなぞ
*/

#include<iostream>
using namespace std;

int N, M;
int a, b, c;

int main() {
  scanf("%d%d", &N, &M);

  if (4 * N < M) { // max num of feets
    printf("-1 -1 -1\n");
    return 0;
  }

  int buf = M - 2 * N;
  if (M % 2 == 0) { // even
    b = 0;
    if ((buf - b) % 2 != 0) {
      printf("-1 -1 -1\n");
      return 0;
    }

    c = (buf - b) / 2;
    while (b <= N && c >= 0) {
      a = N - b - c;
      if (a < 0) break;

      if (2 * a + 3 * b + 4 * c == M) {
        printf("%d %d %d\n", a, b, c);
        return 0;
      }
      
      b += 2;
      c -= 1;
    }   
  }
  else { // odd
    b = 1;
    if ((buf - b) % 2 != 0) {
      printf("-1 -1 -1\n");
      return 0;
    }

    c = (buf - b) / 2;
    while (b <= N && c >= 0) {
      a = N - b - c;
      if (a < 0) break;

      if (2 * a + 3 * b + 4 * c == M) {
        printf("%d %d %d\n", a, b, c);
        return 0;
      }

      b += 2;
      c -= 1;
    }
  }

  printf("-1 -1 -1\n");
  return 0;
}
