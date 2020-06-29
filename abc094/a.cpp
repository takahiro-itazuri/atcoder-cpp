/*
  AtCoder Beginner Contest 094
  A - Cats and Dogs
*/

#include<iostream>
using namespace std;

int A, B, X;

int main() {
  scanf("%d%d%d", &A, &B, &X);
  if (X < A || A + B < X) printf("NO\n");
  else printf("YES\n");
  return 0;
}
