/*
  AtCoder Beginner Contest 101
  A - Eating Symbols Easy
*/

#include<iostream>
#include<string>
using namespace std;

char S[4];

int main() {
  scanf("%s", S);

  int result = 0;
  for (int i = 0; i < 4; ++i) {
    if (S[i] == '+') ++result;
    else --result;
  }

  printf("%d\n", result);
  return 0;
}
