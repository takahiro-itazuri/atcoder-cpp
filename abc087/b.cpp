/*
  AtCoder Beginner Contest 087
  B - Coins
*/

#include<iostream>
using namespace std;

int A, B, C;
int X;

int main() {
  scanf("%d%d%d%d", &A, &B, &C, &X);

  int count = 0;
  for (int a = 0; a <= A; ++a) {
    for (int b = 0; b <= B; ++b) {
      for (int c = 0; c <= C; ++c) {
        if (500 * a + 100 * b + 50 * c == X) ++count;
      }
    }
  }

  printf("%d\n", count);
  return 0;
}
