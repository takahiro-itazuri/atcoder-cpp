/*
  AtCoder Beginner Contest 101
  D - Sunuke Numbers
*/

#include<iostream>
using namespace std;

unsigned long long K;

unsigned long long calcSunuke(unsigned long long n) {
  unsigned long long sunuke = 0;
  while (n != 0) {
    sunuke += n % 10;
    n /= 10;
  }
  return sunuke;
}

bool check(unsigned long long n, unsigned long long base) {
  return n * calcSunuke(n + base) <= calcSunuke(n) * (n + base);
}

int main() {
  scanf("%llu", &K);

  unsigned long long c = 0;
  unsigned long long n = 0;
  unsigned long long base = 1;

  while (1) {
    if (K <= c) break;
    
    if (!check(n + base, base)) base *= 10;

    n += base;
    printf("%llu\n", n);
    ++c;
  }
  return 0;
}
