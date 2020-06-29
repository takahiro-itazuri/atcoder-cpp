/*
  AtCoder Beginner Contest 091
  A - Two Coins
*/

#include<iostream>
using namespace std;

int A, B, C;

int main() {
  scanf("%d%d%d", &A, &B, &C);
  if (A + B >= C) printf("Yes\n");
  else printf("No\n");
  return 0;
}
