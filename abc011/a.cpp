/*
  AtCoder Beginner Contest 011
  A - 来月は何月？
*/

#include<iostream>
using namespace std;

int N;

int main() {
  scanf("%d", &N);
  if (N == 12) printf("1\n");
  else printf("%d\n", N+1);
  return 0;
}
