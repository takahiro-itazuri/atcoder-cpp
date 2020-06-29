/*
  AtCoder Regular Contest 100
  C - Linear Approximation
*/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int N;
int A[200000];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    A[i] -= (i + 1);
  }

  sort(A, A+N);
  int med = A[(N/2)];
  
  unsigned long long result = 0;
  for (int i = 0; i < N; ++i) result += abs(A[i] - med);
  printf("%llu\n", result);
  return 0;
}
