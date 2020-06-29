/*
  AtCoder Beginner Contest 100
  A - Happy Birthday!
*/

#include<iostream>
using namespace std;

int A, B;

int main() {
  scanf("%d%d", &A, &B);

  if (A <= 8 && B <= 8) printf("Yay!\n");
  else printf(":(\n");

  return 0;
}
