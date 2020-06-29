/*
  AtCoder Beginner Contest 009
  B - 心配性な富豪、ファミリーレストランに行く。
*/

#include<iostream>
#include<algorithm>
using namespace std;

int N;
int A[1000];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) scanf("%d", &A[i]);

  sort(A, A+N, greater<int>());

  int maxval = A[0];
  for (int i = 1; i < N; ++i) if (A[i] != maxval) {
    printf("%d\n", A[i]);
    break;
  }

  return 0;
}
