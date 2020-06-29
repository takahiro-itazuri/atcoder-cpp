/*
  AtCoder Beginner Contest 081
  D - Non-decreasing

  方針
    (1)すべての数字が非負の場合 or 負の場合
      N-1回の操作で条件を満たすことができる。
    (2)上記以外の場合  
      N+1回以内に上記の場合に持ち込む
  
  実装
    入力と共に最小値、最大値を保持しておく
    方針の通り
      (1)の場合は、N-1回の操作で条件を満たすことができる。
      (2)の場合は、最小値の絶対値と最大値の絶対値のうち大きい方の数をすべての数に足せば、(1)の場合に帰着できる。
*/

#include<iostream>
using namespace std;

int N, a;

int main() {
  scanf("%d", &N);
  int minval = 1000001, maxval = -1000001;
  int mini, maxi;
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &a);

    if (a < minval) {
      minval = a;
      mini = i;
    }

    if (a > maxval) {
      maxval = a;
      maxi = i;
    }
  }

  if (minval > 0) {
    printf("%d\n", N - 1);
    for (int i = 1; i < N; ++i) printf("%d %d\n", i, i + 1);
  }
  else if (maxval < 0) {
    printf("%d\n", N - 1);
    for (int i = N; i > 1; --i) printf("%d %d\n", i, i - 1);
  }
  else {
    printf("%d\n", 2 * N - 1);
    if (abs(minval) > maxval) {
      for (int i = 1; i <= N; ++i) printf("%d %d\n", mini, i);
      for (int i = N; i > 1; --i) printf("%d %d\n", i, i - 1);
    }
    else {
      for (int i = 1; i <= N; ++i) printf("%d %d\n", maxi, i);
      for (int i = 1; i < N; ++i) printf("%d %d\n", i, i + 1);
    }
  }

  return 0;
}