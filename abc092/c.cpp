/*
  AtCoder Beginner Contest 092
  C - Traveling Plan
*/

#include<iostream>
using namespace std;

int N;
int A[100002];
// B[i]: A[i]とA[i-1]の距離
int B[100002];
// C[i]: A[i]を消すことでどれだけ距離が減るか
int C[100002] = {0};

int main() {
  long long sum = 0;

  scanf("%d", &N);
  A[0] = 0;
  for(int i = 1; i < N + 1; ++i) {
    scanf("%d", &A[i]);
    B[i] = abs(A[i] - A[i-1]);
    sum += B[i];
  }
  A[N+1] = 0;
  B[N+1] = abs(A[N+1] - A[N]);
  sum += B[N+1];

  for (int i = 1; i < N + 1; ++i) {
    printf("%lld\n", sum - (B[i] + B[i+1]) + abs(A[i+1] - A[i-1]));
  }
  return 0;
}
