/*
  AtCoder Beginner Contest 008
  C - コイン
*/

#include<iostream>
using namespace std;

int N;
int C[100];
int nDiv[100] = {0};

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) scanf("%d", &C[i]);
  for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) {
    if (i != j && C[i] % C[j] == 0) nDiv[i] += 1;
  }

  double result = 0.0;
  for (int i = 0; i < N; ++i) {
    if (nDiv[i] % 2 == 0) result += ((double)nDiv[i] + 2.0) / (2.0 * (double)nDiv[i] + 2.0);
    else result += 0.5;
  }

  printf("%.7f\n", result);
  return 0;
}
