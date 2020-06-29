/*
  AtCoder Beginner Contest 103
  C - Modulo Summation
*/

#include<iostream>
using namespace std;

int N, a;

int main() {
  int ans = 0;

  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &a);
    ans += a - 1;
  }

  printf("%d\n", ans);
  return 0;
}
