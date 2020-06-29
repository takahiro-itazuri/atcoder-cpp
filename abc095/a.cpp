/*
  AtCoder Beginner Contest 095
  A - Something on It
*/

#include<iostream>
using namespace std;

char memo[4];

int main() {
  scanf("%s", memo);
  int sum = 700;
  for (int i = 0; i < 3; ++i) {
    if (memo[i] == 'o') sum += 100;
  }

  printf("%d\n", sum);
  return 0;
}
