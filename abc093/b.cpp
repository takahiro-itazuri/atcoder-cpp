/*
  AtCoder Beginner Contest 093
  B - Small and Large Intergers
*/

#include<iostream>
using namespace std;

int A, B, K;

int main() {
  scanf("%d%d%d", &A, &B, &K);
  int AK = A + K - 1, BK = B - K + 1;

  if (AK >= BK) {
    for (int i = A; i <= B; ++i) printf("%d\n", i);
  }
  else {
    for (int i = A; i <= AK; ++i) printf("%d\n", i);
    for (int i = BK; i <= B; ++i) printf("%d\n", i);
  }

  return 0;
}
