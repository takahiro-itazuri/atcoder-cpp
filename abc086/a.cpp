/*
  AtCoder Beginner Contest 086
  A - Product
*/

#include<iostream>
using namespace std;

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  if (a * b % 2 == 0) printf("Even\n");
  else printf("Odd\n");
  return 0;
}
