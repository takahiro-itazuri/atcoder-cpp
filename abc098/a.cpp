/*
  AtCoder Beginner Contest 098
  A - Add Sub Mul
*/

#include<iostream>
using namespace std;

int A, B;
int add, sub, mul;
int maxval;

int main() {
  scanf("%d%d", &A, &B);
  add = A + B;
  sub = A - B;
  mul = A * B;

  maxval = add > sub ? add : sub;
  maxval = mul > maxval ? mul : maxval;
  printf("%d\n", maxval);

  return 0;
}
