/*
  AtCoder Beginner Contest 083
  A - Libra
*/
 
#include<iostream>
using namespace std;
 
int A, B, C, D;
 
int main() {
  scanf("%d %d %d %d", &A, &B, &C, &D);
  if (A + B == C + D) printf("Balanced\n");
  else if (A + B > C + D) printf("Left\n");
  else printf("Right\n");
  return 0;
}
