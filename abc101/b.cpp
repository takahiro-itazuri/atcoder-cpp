/*
  AtCoder Beginner Contest 101
  B - Digit Sums
*/

#include<iostream>
using namespace std;

unsigned int N, S;

int main() {
  scanf("%u", &N);

  S = 0;
  uint buf = N;
  while(buf != 0) {
    S += buf % 10;
    buf /= 10;
  }

  if (N % S == 0) printf("Yes\n");
  else printf("No\n");
  return 0;
}
