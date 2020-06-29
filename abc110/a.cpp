/*
  AtCoder Beginner Contest 110
  A - Maximize the Furmula

  方針
    A、B、Cのうち最大のものを十の位の数に設定する。

  実装
    先に全部一の位だとしてfor文で足し算をする。
    そのついでに最大の値を保持する。
    最後にその最大値を引いたあと、それを十倍したものを足す。
*/

#include<iostream>
using namespace std;

int main() {
  int ABC[3];
  scanf("%d %d %d", &ABC[0], &ABC[1], &ABC[2]);

  int sum = 0;
  int maxval = 0;
  for (int i = 0; i < 3; ++i) {
    sum += ABC[i];
    if (ABC[i] > maxval) maxval = ABC[i];
  }

  printf("%d\n", sum - maxval + 10 * maxval);
  return 0;
}
