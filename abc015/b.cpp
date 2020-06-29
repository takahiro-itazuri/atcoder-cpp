/*
  AtCoder Beginner Contest 015
  B - 高橋くんの集計
*/

#include<iostream>
using namespace std;

int N, A;

int main() {
  scanf("%d", &N);

  int sum = 0, count = 0;
  REP(i,N) {
    scanf("%d", &A);
    if (A != 0) ++count;
    sum += A;
  }

  printf("%d\n", (sum + count - 1) / count);
  return 0;
}
