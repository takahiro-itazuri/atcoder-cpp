/*
  AtCoder Beginner Contest 100
  B - Ringo's Favorite Numbers
*/

#include<iostream>
using namespace std;

int D, N;

int main() {
   scanf("%d%d", &D, &N);

  if (N == 100) N = 101;
  for (int i = 0; i < D; ++i) {
    N *= 100;
  }

  printf("%d\n", N);
  return 0;
}
