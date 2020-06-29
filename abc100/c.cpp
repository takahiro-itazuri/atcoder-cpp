/*
  AtCoder Beginner Contest 100
  C - *3 or /2
*/

#include<iostream>
#include<vector>
using namespace std;

int N, a;

int numDivByTwo(int a) {
  int c = 0;
  while(a % 2 == 0) {
    a /= 2;
    ++c;
  }
  return c;
}

int main() {
  scanf("%d", &N);

  int count = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &a);
    count += numDivByTwo(a);
  }

  printf("%d\n", count);
  return 0;
}
