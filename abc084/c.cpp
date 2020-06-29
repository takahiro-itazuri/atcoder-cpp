/*
  AtCoder Beginner Contest 084
  C - Special Trains
*/

#include<iostream>
using namespace std;

int N;
int C[500], S[500], F[500];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N - 1; ++i) {
    scanf("%d %d %d", &C[i], &S[i], &F[i]);
  }

  for (int i = 0; i < N - 1; ++i) {
    int t = 0;
    for (int j = i; j < N - 1; ++j) {
      if (t < S[j]) t = S[j];
      int n = (t - S[j] + (F[j] - 1)) / F[j];
      t = S[j] + n * F[j] + C[j];
    }
    printf("%d\n", t);
  }

  printf("0\n");
  return 0;
}