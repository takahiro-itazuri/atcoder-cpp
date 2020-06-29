/*
  AtCoder Beginner Contest 087
  A - Buying Sweets
*/

#include<iostream>
using namespace std;

int X, A, B;

int main() {
  scanf("%d%d%d", &X, &A, &B);
  printf("%d\n", (X - A) % B);
  return 0;
}
