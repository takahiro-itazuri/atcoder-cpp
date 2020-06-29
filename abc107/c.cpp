/*
  AtCoder Beginner Contest 107
  C - Candles

  方針
    効率が良いろうそくの回るには、連続するK個のろうそくを回ればよい。
    先にK個の周るろうそくが決まっていた場合を考える。正の位置にあるろ
    うそくを回る場合も、負のろうそくを回る場合も、0に近い方から回るの
    が良く、移動距離は現在いる位置から最も遠くの位置にあるろうそくまで
    の距離に等しい。

    ここで正の位置にあるろうそくのうち、最も遠くにあるろうそくまでの
    距離をmaxpos、負の位置にあるろうそくのうち、最も遠くにあるろう
    そくまでの距離をmaxnegとすると、
    (1) 正のろうそくを先に回る場合
        distance = maxpos + (maxpos + maxneg)
                 = 2 * maxpos + maxneg
    (2) 負のろうそくを先に回る場合
        distance = maxneg + (maxneg + maxpos)
                 = 2 * maxneg + maxpos
    となる。
    以上から、最も遠くにあるろうそくがより近くにある方向（正 or 負）
    に先に回る方が良いことがわかる。

  実装
    連続するK個のろうそくを回るすべてのパターンを試す。

*/

#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int N, K;

int main() {
  scanf("%d%d", &N, &K);
  vector<int> x(N);

  for (int n = 0; n < N; ++n) scanf("%d", &x[n]); 
  
  int minval = numeric_limits<int>::max();
  for (int n = 0; n + K <= N; ++n) {
    int l = x[n], r = x[n + K - 1];
    int maxpos = max(0, max(l, r));
    int maxneg = max(0, max(-l, -r));
    minval = min(minval, maxpos + maxneg + min(maxpos, maxneg));
  }

  printf("%d\n", minval);
  return 0;
}