/*
  AtCoder Beginner Contest 090
  A - Diagonal String
*/

#include<iostream>
using namespace std;

char c[9];

int main() {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      scanf("%c", &c[i*3+j]);
      if (j == 2) getchar();
    }
  }

  printf("%c%c%c\n", c[0], c[4], c[8]);
  return 0;
}