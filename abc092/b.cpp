/*
  AtCoder Beginner Contest 092
  B - Chocolate
*/

#include<iostream>
using namespace std;

int N, D, X;
int A;

int main() {
  scanf("%d%d%d", &N, &D, &X);

  int count = X;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A);
    count += (D - 1) / A + 1;
  }

  printf("%d\n", count);
  return 0;
}
