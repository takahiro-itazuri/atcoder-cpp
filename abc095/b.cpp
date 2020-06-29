/*
  AtCoder Beginner Contest 095
  B - Bitter Alchemy
*/

#include<iostream>
#include<algorithm>
using namespace std;

int N, X;
int m[100];

int main() {
  scanf("%d%d", &N, &X);

  for (int i = 0; i < N; ++i) {
    scanf("%d", &m[i]);
    X -= m[i];
  }

  int count = N;
  sort(m, m+N);
  count += X / m[0];

  printf("%d\n", count);
  return 0;
}
