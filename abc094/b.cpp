/*
  AtCoder Beginner Contest -94
  B - Toll Gates
*/

#include<iostream>
using namespace std;

int N, M, X, A;
int cost[101] = {0};

int main() {
  scanf("%d%d%d", &N, &M, &X);
  for (int i = 0; i < M; ++i) {
    scanf("%d", &A);
    cost[A] = 1;
  }

  for (int i = 1; i < N+1; ++i) cost[i] += cost[i-1];

  int minval = cost[X] < cost[N] - cost[X] ? cost[X] : cost[N] - cost[X];
  printf("%d\n", minval);
  return 0;
}
