/*
  AtCoder Beginner Contest 096
  D - Five, Five Everywhere
*/

#include<iostream>
using namespace std;

bool isPrime(int x) {
  if (x < 2) return false;
  for (int i = 2; i*i <= x; ++i) {
    if (x % i == 0) return false;
  }
  return true;
}

int N;

int main() {
  scanf("%d", &N);
  for (int i = 2; i <= 55555; ++i) {
    if (isPrime(i) && (i % 5) == 1) {
      printf("%d ", i);
      --N;
    }
    if (N == 0) break;
  }

  printf("\n");
  return 0;
}
