/*
  AtCoder Beginner Contest 016
  A - 12月6日
*/

#include<iostream>
using namespace std;

int M, D;

int main() {
  scanf("%d%d", &M, &D);
  if (M % D == 0) printf("YES\n");
  else printf("NO\n");
  return 0;
}