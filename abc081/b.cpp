/*
  AtCoder Beginner Contest 081
  B - Shift only

  方針
    一度の操作ですべての数を2で割るため、2で割り切れる回数が最小の数が一番最初に割り切れなくなる。
  
  実装
    入力を受け取る度に、何回2で割れるかを計算し、最小の回数を保持しておく。
*/

#include<iostream>
#include<limits>
using namespace std;

int N;
int A;

int main() {
  scanf("%d", &N);

  int minval = numeric_limits<int>::max();
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A);
    int count = 0;
    while (A % 2 == 0) {
      ++count;
      A /= 2;
    }
    minval = min(minval, count);
  }

  printf("%d\n", minval);
  return 0;
}
