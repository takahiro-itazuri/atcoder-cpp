/*
  AtCoder Beginner Contest 005
  C - おいしいたこ焼きの売り方
*/

#include<iostream>
#include<vector>
using namespace std;

unsigned int T, N, M;
unsigned int A[100], B[100];

int main() {
  scanf("%u%u", &T, &N);
  for (int i = 0; i < N; ++i) scanf("%u", &A[i]);
  scanf("%u", &M);
  for (int i = 0; i < M; ++i) scanf("%u", &B[i]);

  if (N < M) {
    printf("no\n");
    return 0;
  }

  unsigned int A_idx = 0;
  for (int i = 0; i < M; ++i) {
    while (!(A[A_idx] <= B[i] && B[i] <= A[A_idx] + T)) {
      ++A_idx;
      if (A_idx >= N) {
        printf("no\n");
        return 0;
      }
    }

    if (B[i] < A[A_idx]) {
      printf("no\n");
      return 0;
    }

    ++A_idx;
  }

  printf("yes\n");
  return 0;
}
