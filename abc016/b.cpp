/*
  AtCoder Beginner Contest 016
  B - A±B Problem
*/

#include<iostream>
using namespace std;

int A, B, C;

int main() {
  scanf("%d%d%d", &A, &B, &C);
  if (B == 0 && A == C) printf("?\n");
  else if (A + B == C) printf("+\n");
  else if (A - B == C) printf("-\n");
  else printf("!\n");
  return 0;
}