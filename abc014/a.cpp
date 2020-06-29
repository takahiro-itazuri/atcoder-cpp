/*
  AtCoder Beginner Contest 014
  A - けんしょう先生のお菓子作り
*/

#include<iostream>
using namespace std;

int a, b;

int main() {
  scanf("%d%d", &a, &b);
  int remain = a - (a / b) * b;
  if (remain == 0) printf("0\n");
  else printf("%d\n", b - remain);
  return 0;
}
