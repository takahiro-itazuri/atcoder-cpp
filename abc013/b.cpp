/*
  AtCoder Beginner Contest 013
  B - 掟
*/

#include<iostream>
#include<cmath>
using namespace std;

int a, b;

int main() {
  scanf("%d%d", &a, &b);
  int l = a > b ? a : b;
  int s = a < b ? a : b;

  int result = l-s;
  if (9 - l + s + 1 < result) result = 9 - l + s + 1;

  printf("%d\n", result);
  return 0;
}
