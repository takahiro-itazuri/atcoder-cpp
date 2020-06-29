/*
  AtCoder Beginner Contest 086
  B - 1 21
*/

#include<iostream>
#include<cmath>
using namespace std;

bool check(int x) {
  int i = 1;
  while (1) {
    if (i * i > x || i * i > 100100) return false;
    if (i * i == x) return true;
    i += 1;
  }
}

int a, b;

int main() {
  scanf("%d%d", &a, &b);

  int n = a;
  int nDigits;
  if (b == 0) nDigits = 1;
  else nDigits = log10(b) + 1;

  for (int i = 0; i < nDigits; ++i) {
    n *= 10;
  }
  n += b;

  if (check(n)) printf("Yes\n");
  else printf("No\n");

  return 0;
}