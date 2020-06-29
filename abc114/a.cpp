/*
  AtCoder Beginner Contest 114
  A - 753

  方針
    与えられた数字が7、5、3のいずれかに該当するかどうかを判定する。

  実装
    特になし。
*/

#include<iostream>
using namespace std;

int main() {
  int X;
  scanf("%d", &X);

  if (X == 3 || X == 5 || X == 7) printf("YES\n");
  else printf("NO\n");

  return 0;
}

