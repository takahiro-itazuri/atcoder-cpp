/*
  AtCoder Beginner Contest 002
  A - 正直者
*/

#include<iostream>
using namespace std;

unsigned int X, Y;

int main() {  
  scanf("%u%u", &X, &Y);

  if (X > Y) printf("%u\n", X);
  else printf("%u\n", Y);

  return 0;
}
