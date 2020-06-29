/*
  AtCoder Beginner Contest 092
  A - Traveling Budget
*/

#include<iostream>
using namespace std;

int A, B, C, D;

int main() {
  scanf("%d%d%d%d", &A, &B, &C, &D);

  int amount = 0;
  amount += A < B ? A : B;
  amount += C < D ? C : D;

  printf("%d\n", amount);
  return 0;
}
