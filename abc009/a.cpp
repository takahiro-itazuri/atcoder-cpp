/*
  AtCoder Beginner Contest 009
  A - 引越し作業
*/

#include<iostream>
using namespace std;

int N;

int main() {
  scanf("%d", &N);
  if (N % 2 == 0) printf("%d\n", N/2);
  else printf("%d\n", N/2+1);
  return 0;
}
