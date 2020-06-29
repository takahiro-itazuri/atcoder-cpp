/*
  AtCoder Regular Contest 098
  C - Attention
*/

#include<iostream>
using namespace std;

int N;
char S[300001];

int main() {
  scanf("%d", &N);
  scanf("%s", S);

  int mincost, cost = 0;
  for (int i = 1; i < N; ++i) if (S[i] == 'E') ++cost;
  
  mincost = cost;
  for (int i = 1; i < N; ++i) {
    if (S[i-1] == 'W') ++cost;
    if (S[i] == 'E') --cost;
    if (cost < mincost) mincost = cost;
  }
  
  printf("%d\n", mincost);
  return 0;
}
