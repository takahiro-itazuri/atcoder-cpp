/*
  AtCoder Beginner Contest 084
  D - 2017-like Number
*/

#include<iostream>
using namespace std;

int Q;
bool p[100001]; // true: 合成数, false: 素数
int c[100002]; // 2017-like numbers

int main() {
  for (int i = 2; i <= 100000; ++i) {
    if (!p[i]) {
      for (int j = i + i; j <= 100000; j += i) p[j] = true;
    }
  }

  for (int i = 3; i <= 100000; i += 2) {
    if (!p[i] && !p[(i + 1) / 2]) c[i] += 1;
  }

  for (int i = 3; i <= 100000; ++i) {
    c[i] += c[i-1];
  }

  scanf("%d", &Q);
  for (int q = 0; q < Q; ++q) {
    int l, r;
    scanf("%d %d", &l, &r);
    printf("%d\n", c[r] - c[l - 1]);
  }

  return 0;
}