/*
  AtCoder Beginner Contest 012
  B - 入浴時間
*/

#include<iostream>
using namespace std;

int N;
int h, m, s;

int main() {
  scanf("%d", &N);
  s = N % 60;
  N /= 60;
  m = N % 60;
  N /= 60;
  h = N;

  printf("%02d:%02d:%02d\n", h, m, s);
  return 0;
}
