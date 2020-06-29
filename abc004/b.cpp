/*
  AtCoder Beginner Contest 004
  B - 回転
*/

#include<iostream>
#include<vector>
using namespace std;

char c[16];

int main() {
  char dummy;
  for (int i = 0; i < 16; ++i) {
    if (i % 4 == 3) {
      scanf("%c", &c[i]);
      getchar();
    }
    else scanf("%c ", &c[i]);
  }

  for (int i = 15; i >= 0; --i) {
    printf("%c", c[i]);
    if (i % 4 == 0) printf("\n");
    else printf(" ");
  }
  return 0;
}
