/*
  AtCoder Beginner Contest 080
  D - Recording

  方針
    同時に最大いくつのチャンネルを録画しなければならないかを数えればよい。

    あるチャンネルで区間[s,t)を録画したいとき、
    録画機が使用される時間は区間[s-0.5,t)である。
    これを離散化させるために区間を2倍して考えると、
    録画機が使用される時間は区間[2s-1,2t)となる。

  実装
    各チャンネルごとにどの時間帯が録画に必要かを格納する配列を用意する。
    録画が必要な場合は1、録画が必要ない場合は0を格納する。
    最後にすべてのチャンネルを統合して、必要な録画機の最大値を出力する。

  追記
    いもす法を用いて高速化が可能であるが、
    チャンネルが連続しているかどうかを判定する必要があり、
    通常より正確に実装するのが面倒になる。
*/

#include<iostream>
using namespace std;

int N, C;
int s, t, c;
int schedule[31][200002] = {0};

int main() {
  scanf("%d%d", &N, &C);
  for (int n = 0; n < N; ++n) {
    scanf("%d%d%d", &s, &t, &c);
    for (int i = 2 * s - 1; i < 2 * t; ++i) {
      schedule[c][i] = 1;
    }
  }

  int maxval = 0;
  for (int i = 0; i < 200002; ++i) {
    int val = 0;
    for (int c = 1; c <= C; ++c) val += schedule[c][i];
    maxval = max(maxval, val);
  }

  printf("%d\n", maxval);
  return 0;
}
