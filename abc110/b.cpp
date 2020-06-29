/*
  AtCoder Beginner Contest 110
  B - 1 Dimensional World's Tale

  方針
    A帝国に着目して戦争が起こらないギリギリの整数Zを求める。
    次にその値Zに対してB帝国から見て戦争が起こらないかどうかを判定する。

  実装
    x1 ~ xN のうち最大の値だけを保持し、
    y1 ~ yM のうち最小の値だけを保持すればよい。 
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int N, M, X, Y;
  scanf("%d %d %d %d", &N, &M, &X, &Y);
  
  int x;
  int max_x = -1e9;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &x);
    if (x > max_x) max_x = x;
  }

  int y;
  int min_y = 1e9;
  for (int i = 0; i < M; ++i) {
    scanf("%d", &y);
    if (y < min_y) min_y = y;
  }

  int Z = max(max_x, X);

  if (Y > Z && min_y > Z) printf("No War\n");
  else printf("War\n");
  return 0;
}
