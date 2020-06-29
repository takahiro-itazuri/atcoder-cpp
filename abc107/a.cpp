/*
  AtCoder Beginner Contest 107
  A - Train

  方針
    特になし。

  実装
    特になし。
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

int N, i;

int main() {
  scanf("%d%d", &N, &i);
  printf("%d\n", N - i + 1);
  return 0;
}
