/*
  AtCoder Beginner Contest 115
  A - Christmas Eve Eve Eve

  方針
    特になし

  実装
    全ての分岐を書くのは面倒なので、少し楽をできる書き方をする。
*/

#include<iostream>
using namespace std;

int main() {
  int D;
  scanf("%d", &D);
  
  printf("Christmas");
  for (; D < 25; D += 1) {
    printf(" Eve");
  }
  printf("\n");

  return 0;
}
