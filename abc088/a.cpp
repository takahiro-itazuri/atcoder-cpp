/*
  AtCoder Beginner Contest 088
  A - Infinite Coins
*/

#include<iostream>
using namespace std;

int N, A;

int main() {
  scanf("%d%d", &N, &A);
  if (N % 500 <= A) printf("Yes\n");
  else printf("No\n");
  return 0;
}