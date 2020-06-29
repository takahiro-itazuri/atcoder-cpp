/*
  AtCoder Beginner Contest 086
  D - Checker
*/

#include<iostream>
#include<vector>
using namespace std;

int N, K;
int memo[2001][2001] = {0}; // 黒の始点(x,y)

void imos(int x1, int y1, int x2, int y2) {
  ++memo[x1][y1];
  ++memo[x2][y2];
  --memo[x1][y2];
  --memo[x2][y1];
}

int main() {
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N; ++i) {
    int x, y;
    char c;
    scanf("%d %d %c", &x, &y, &c);

    // covert request from white to black
    if (c == 'W') x += K;
    x %= 2 * K;
    y %= 2 * K;

    if ((x < K && y < K) || (x >= K && y >= K)) { // lower left or upper right
      int x_ = x % K, y_ = y % K;

      imos(0, 0, x_ + 1, y_ + 1);
      imos(x_ + K + 1, 0, 2 * K, y_ + 1);
      imos(x_ + 1, y_ + 1, x_ + K + 1, y_ + K + 1);
      imos(0, y_ + K + 1, x_ + 1, 2 * K);
      imos(x_ + K + 1, y_ + K + 1, 2 * K, 2 * K);
    }
    else { // lower right or upper right
      int x_ = x % K, y_ = y % K;

      imos(x_ + 1, 0, x_ + K + 1, y_ + 1);
      imos(0, y_ + 1, x_ + 1, y_ + K + 1);
      imos(x_ + K + 1, y_ + 1, 2 * K, y_ + K + 1);
      imos(x_ + 1, y_ + K + 1, x_ + K + 1, 2 * K);
    }
  }

  for (int i = 0; i <= 2 * K; ++i) {
    for (int j = 1; j <= 2 * K; ++j) {
      memo[i][j] += memo[i][j - 1];
    }
  }

  for (int i = 1; i <= 2 * K; ++i) {
    for (int j = 0; j <= 2 * K; ++j) {
      memo[i][j] += memo[i - 1][j];
    }
  }

  int maxval = 0;
  for (int i = 0; i <= 2 * K; ++i) {
    for (int j = 0; j <= 2 * K; ++j) {
      maxval = max(memo[i][j], maxval);
    }
  }

  // // print imos
  // for (int j = 4 * K + 1; j >= 0; --j) {
  //   for (int i = 0; i < 4 * K + 2; ++i) {
  //     printf("%d", imos[j][i]);
  //   }
  //   printf("\n");
  // }

  printf("%d\n", maxval);
  return 0;
}