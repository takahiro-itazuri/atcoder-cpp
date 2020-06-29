/*
  AtCoder Beginner Contest 019
  A - 高橋くんと年齢

  方針
    3つ値の中央値を出力する。

  実装
    ソートした後、2番目の要素を出力する。
*/

#include<iostream>
#include<algorithm>
using namespace std;

int abc[3];

int main() {
  scanf("%d%d%d", &abc[0], &abc[1], &abc[2]);
  sort(abc, abc+3);
  printf("%d\n", abc[1]);
  return 0;
}
