/*
  AtCoder Beginner Contest 080
  B - Harshad Number

  方針
    各桁の数字の和をどのように計算すればよいか。
    1の位を確認した後、10で割る操作を繰り返す。

  実装
    最後にX % f(X)を計算するため、Xのバッファを用意して、
    そのバッファに対して上述の操作を行う。
*/

#include<iostream>
using namespace std;

int X;

int main() {
  scanf("%d", &X);

  int sum_digits = 0;
  int bufX = X;
  while (bufX != 0) {
    sum_digits += bufX % 10;
    bufX /= 10;
  }

  if (X % sum_digits == 0) printf("Yes\n");
  else printf("No\n");
  return 0;
}
