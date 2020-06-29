/*
  AtCoder Beginner Contest 017
  A - プロコン
*/

#include<iostream>
using namespace std;

int s, e;

int main() {
  int score = 0;
  for (int i = 0; i < 3; ++i) {
    scanf("%d%d", &s, &e);
    score += s * e / 10;
  }
  printf("%d\n", score);
  return 0;
}