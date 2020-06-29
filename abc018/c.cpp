/*
  AtCoder Beginner Contest 018
  C - 菱型カウント
*/
 
#include<iostream>
using namespace std;
 
int R, C, K;
bool memo[501][501] = {0}; // true: NG, false: OK
 
int main() {
  scanf("%d %d %d", &R, &C, &K);
 
  for (int r = 1; r <= R; ++r) {
    for (int c = 1; c <= C; ++c) {
      char ch;
      scanf("%c", &ch);
      if (ch == '\n') scanf("%c", &ch);
 
      if (!((K <= c && c <= C - K + 1) && (K <= r && r <= R - K + 1))) {
        memo[r][c] = true;
      }
 
      if (ch == 'x') { // black
        for (int y = -K; y <= K; ++y) {
          for (int x = -K; x <= K; ++x) {
            if (!(1 <= r + y && r + y <= R && 1 <= c + x && c + x <= C)) continue;
            if (abs(x) + abs(y) < K) memo[r + y][c + x] = true;
          }
        }
      }
    }
  }
 
  int cnt = 0;
  for (int r = 1; r <= R; ++r) {
    for (int c = 1; c <= C; ++c) {
      if (!memo[r][c]) ++cnt;
    }
  }
 
  printf("%d\n", cnt);
  return 0;
}