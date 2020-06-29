/*
  AtCoder Beginner Contest 013
  C - 節制
*/

#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

long long N, H, A, B, C, D, E;

int main() {
  scanf("%lld%lld%lld%lld%lld%lld%lld", &N, &H, &A, &B, &C, &D, &E);

  // 毎日Eだけお腹が減る場合
  long long need = E * N - H + 1; // 必要な食事量
  long long newB = B + E;     // 普通の食事を食べて得られる満腹度
  long long newD = D + E;     // 質素な食事を食べて得られる満腹度

  long long cost = numeric_limits<long long>::max();
  for (int n = 0; n < N + 1; ++n) {
    if (newB * n >= need) { // 普通の食事のみ
      cost = min(cost, A * n);
      break;
    }
    else {                  // 普通の食事と質素な食事
      long long remain = need - newB * n; // 残り必要な食事量
      int m = (remain + (newD - 1)) / newD;
      if (n + m <= N) cost = min(cost, A * n + C * m);
    }
  }

  printf("%lld\n", cost);
  return 0;
}
