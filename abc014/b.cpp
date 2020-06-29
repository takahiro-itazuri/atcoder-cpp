/*
  AtCoder Beginner Contest 014
  B - 価格の合計
*/

#include<iostream>
using namespace std;

unsigned int n, X;
int a;

int main() {
  scanf("%u%u", &n, &X);

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a);
    if ((X >> i) & 1 != 0) sum += a;
  }

  printf("%d\n", sum);
  return 0;
}
