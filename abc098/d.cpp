/*
  AtCoder Beginner Contest 098
  D - Xor Sum 2
*/

#include<iostream>
using namespace std;

int N;
unsigned long long sum = 0;
unsigned long long A[200001];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) scanf("%llu", &A[i]);

  unsigned long long count = 0;
  int j = 1;
  sum = A[0];
  for (int i = 0; i < N; ++i) {
    while((j < N) && ((sum & A[j]) == 0)) sum ^= A[j++];
    count += j - i;
    sum ^= A[i];
  }

  printf("%llu\n", count);
  return 0;
}
