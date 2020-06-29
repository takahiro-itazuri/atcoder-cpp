/*
  AtCoder Beginner Contest 010
  B - 花占い
*/

#include<iostream>
using namespace std;

int n, a;

int main() {
  scanf("%d", &n);

  int count = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a);
    if (a % 2 == 1) { // パターン１で「好き」
      if (a % 3 == 2) count += 2;
    }
    else {            // パターン１で「嫌い」
      if (a % 3 == 1 || a % 3 == 2) count += 1;
      else count += 3;
    }
  }

  printf("%d\n", count);
  return 0;
}
