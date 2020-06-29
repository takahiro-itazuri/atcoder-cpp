/*
  AtCoder Beginner Contest 104
  A - Rated for Me
*/

#include<iostream>
using namespace std;

int R;

int main() {
  scanf("%d", &R);

  if (R < 1200) printf("ABC\n");
  else if (R < 2800) printf("ARC\n");
  else printf("AGC\n");
  
  return 0;
}
