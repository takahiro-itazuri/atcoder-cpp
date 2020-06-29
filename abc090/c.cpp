/*
  AtCoder Beginner Contest 090
  C - Flip, Flip, and Flip......
*/

#include<iostream>
using namespace std;

long long N, M;

int main() {
  scanf("%lld%lld", &N, &M);

  if (N == 1 && M == 1) {
    printf("1\n");
  }
  else if (N == 1) {
    printf("%lld\n", M - 2);
  }
  else if (M == 1) {
    printf("%lld\n", N - 2);
  }
  else {
    printf("%lld\n", (N - 2) * (M - 2));
  }

  return 0;
}