/*
  AtCoder Beginner Contest 090
  D - Remainder Reminder
*/

#include<iostream>
using namespace std;

long long N, K;

int main() {
  scanf("%d%d", &N, &K);

  long long cnt = 0;
  for (long long b = K + 1; b <= N; ++b) {
    long long n = N / b;
    long long k = N % b;

    cnt += n * (b - K);
    if (K <= k) cnt += k - K + 1;
    if (K == 0) cnt -= 1;
  }

  printf("%lld\n", cnt);
  return 0;
}