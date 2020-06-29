/*
  AtCoder Beginner Contest 090
  B - Palindromic NUmbers
*/

#include<iostream>
using namespace std;

int A, B;

bool check(int x) {
  return ((x / 10000) == (x % 10) && ((x / 1000) % 10) == ((x / 10) % 10));
}

int main() {
  int cnt = 0;
  scanf("%d%d", &A, &B);

  for (int x = A; x <= B; ++x) {
    if (check(x)) cnt += 1;
  }

  printf("%d\n", cnt);
  return 0;
}