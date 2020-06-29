/*
  AtCoder Beginner Contest 095
  C - Half and Half
*/

#include<iostream>
#include<cmath>
using namespace std;

int A, B, C, X, Y;

int main() {
  scanf("%d%d%d%d%d", &A, &B, &C, &X, &Y);

  long long sum = 0;

  if (A + B <= 2 * C) { // 個別に買う方がコスパがいい場合
    sum = A * X + B * Y;
  }
  else {                // ABピザの方がコスパがいい場合
    if (X < Y) {
      sum = 2 * C * X + B * (Y - X);
      if (sum > 2 * C * Y) sum = 2 * C * Y;
    }
    else {
      sum = 2 * C * Y + A * (X - Y);
      if (sum > 2 * C * X) sum = 2 * C * X;
    }
  }

  printf("%lld\n", sum);
  return 0;
}
