/*
  AtCoder Beginner Contest 105
  A - AtCoder Crackers
*/

#include<iostream>
using namespace std;

int N, K;

int main() {
  scanf("%d%d", &N, &K);
  if (N % K == 0) printf("0\n");
  else printf("1\n");
  return 0;
}
