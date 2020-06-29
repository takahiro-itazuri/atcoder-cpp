/*
  AtCoder Beginner Contest 078
  A - HEX

  方針
    文字列の大小を判定する。

  実装
    char型も普通の数値型と同様にそのまま大小判定ができる。
*/

#include<iostream>
using namespace std;

char X, Y;

int main() {
  scanf("%c %c", &X, &Y);

  if (X == Y) printf("=\n"); 
  else if (X < Y) printf("<\n");
  else if (X > Y) printf(">\n");

  return 0;
}