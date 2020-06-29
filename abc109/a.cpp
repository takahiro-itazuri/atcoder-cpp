/*
  AtCoder Beginner Contest 109
  A - ABC333

  方針
    A*B*Cが奇数となるにはAとBがどちらも偶数でなければならない。
    AとBが奇数の場合、Cは1または3を選択すれば、A*B*Cは奇数となる。

  実装
    特になし。
*/

#include<iostream>
using namespace std;

int A, B;

int main() {
  scanf("%d%d", &A, &B);
  if (A % 2 == 0 || B % 2 == 0) printf("No\n");
  else printf("Yes\n");
  return 0;
}
