/*
  AtCoder Beginner Contest 087
  C - Candies
*/

#include<iostream>
using namespace std;

int N, A;
int row1[101] = {0}, row2[101] = {0};

int main() {
  scanf("%d", &N);
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &A);
    row1[i] = row1[i-1] + A;
  }
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &A);
    row2[i] = row2[i-1] + A;
  }

  // 下る位置を探索
  int maxval = -1;
  for (int i = 1; i <= N; ++i) {
    int val = row1[i] - row1[0] + row2[N] - row2[i-1];
    if (val > maxval) maxval = val;
  }

  printf("%d\n", maxval);
  return 0;
}
