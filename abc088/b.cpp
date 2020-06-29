/*
  AtCoder Beginner Contest 088
  B - Card Game for Two
*/

#include<iostream>
#include<algorithm>
using namespace std;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define REP(i,n) FOR(i,0,n)

int N;
int A[100];

int main() {
  scanf("%d", &N);
  REP(i,N) scanf("%d", &A[i]);

  sort(A, A+N, greater<int>());
  int a = 0, b = 0;
  REP(i,N) {
    if (i % 2 == 0) a += A[i];
    else b += A[i];
  }

  printf("%d\n", a - b);
  return 0;
}
