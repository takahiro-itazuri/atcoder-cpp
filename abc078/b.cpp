/*
  AtCoder Beginner Contest 078
  B - ISU

  方針
    1人で座る場合、Y+2*Zの幅が必要である。
    2人目以降を追加する場合は、Y+Zの幅が必要になる。

    ans = (X - (Y + 2 * Z)) / (Y + Z) + 1
  実装
    上述の通り。
*/

#include<iostream>
using namespace std;

int X, Y, Z;

int main() {
  scanf("%d %d %d", &X, &Y, &Z);
  
  printf("%d\n", (X - (Y + 2 * Z)) / (Y + Z) + 1);
  return 0;
}