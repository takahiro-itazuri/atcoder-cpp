/*
  AtCoder Beginner Contest 020
  B - 足し算

  方針
    Bが何桁か計算し、Aをその桁数分だけ左にずらす。

  実装
    Bを超えるまでｎDigitに10をかけ続ければ、
    nDigitはBより1桁大きくなる。
*/

#include<iostream>
#include<cmath>
using namespace std;

int A, B;

int main() {
  scanf("%d%d", &A, &B);
  int nDigit = 1;
  while (nDigit <= B) nDigit *= 10;
  printf("%d\n", 2 * (A * nDigit + B));
  return 0;
}