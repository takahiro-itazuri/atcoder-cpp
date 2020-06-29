/*
  AtCoder Beginner Contest 096
  A - Day of Takahashi
*/

#include<iostream>
using namespace std;

int a, b;

int main() {
  scanf("%d%d", &a, &b);
  if (a <= b) printf("%d\n", a);
  else printf("%d\n", a-1);
  return 0;
}
