/*
  AtCoder Beginner Contest 024
  B - 自動ドア

  方針
    各時刻にドアが開いているかどうか保持する配列openを用意する。

    各入力Aに対して、配列openの[A,A+T)まで、すべてtrueにして、最後にtrue
    の数を数える。この方法の計算量は、O(N*T+10^6)となるため、大きな入力に
    対して、TLEとなる。

    そこで、累積和を用いる方法（imos法）を用いると、各入力の始点と終点にラベ
    ルをつけておき、最後に全体に対して累積和を取るため、計算量はO(N+10^6)と
    なる。

  実装
    imos法を実装すればよい。
    作る配列の大きさに注意すること。
*/

#include<iostream>
#include<vector>
using namespace std;

int N, T, A;

int main() {
  scanf("%d%d", &N, &T);
  vector<int> open(1000001 + T, 0);
  
  for (int n = 0; n < N; ++n) {
    scanf("%d", &A);
    open[A] += 1;
    open[A + T] -= 1;
  }

  int cnt = open[0] > 0 ? 1 : 0;
  for (int t = 1; t < open.size(); ++t) {
    open[t] += open[t-1];
    if (open[t] > 0) cnt += 1;
  }

  printf("%d\n", cnt);
  return 0;
}