/*
  AtCoder Beginner Contest 093
  A - abc of ABC
*/

#include<iostream>
using namespace std;

char S[4];
int count[3] = {0};

int main() {
  scanf("%s", S);
  for (int i = 0; i < 3; ++i) count[S[i] - 'a'] += 1;
  for (int i = 0; i < 3; ++i) {
    if (count[i] != 1) {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
  return 0;
}
