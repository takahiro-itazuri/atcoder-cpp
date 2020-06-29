/*
  AtCoder Beginner Contest 108
  A - Pair

  方針
    偶数の数と奇数の数を数えれば良い。
  
  実装
    ans = (偶数の数) * (奇数の数)
*/

#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

int K;

int main() {
  scanf("%d", &K);
  int even, odd;
  even = K / 2;
  if (K % 2 == 0) odd = even;
  else odd = even + 1;
  printf("%d\n", even * odd);
  return 0;
}
