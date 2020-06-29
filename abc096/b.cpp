/*
  AtCoder Beginner Contest 096
  B - Maximum Sum
*/

#include<iostream>
using namespace std;

int A, B, C, K;

int main() {
  scanf("%d%d%d%d", &A, &B, &C, &K);
  if (A >= C && A >= B) {
    for (int i = 0; i < K; ++i) A *= 2;
  }
  else if (B >= C && B >= A) {
    for (int i = 0; i < K; ++i) B *= 2;
  }
  else if (C >= A && C >= B) {
    for (int i = 0; i < K; ++i) C *= 2;
  }
  printf("%d\n", A + B + C);
  return 0;
}
