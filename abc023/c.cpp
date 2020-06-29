/*
  AtCoder Beginner Contest 023
  C - 収集王

  方針
    各マスについて縦と横を見て、条件を満たすマスを数え上げる方法の計算量は
    O(N+RC*RC)となるため、TLEになってしまう。

    各マスについて条件を判定する計算量を減らすため、各行と各列の飴があるマス
    の個数を事前にカウントしておく方法の計算量はO(N+RC*1)となるが、TLEにな
    ってしまう可能性がある。

    このように全探索を行う方法では不可能であることがわかる。そこで全探索をし
    なくてもよい問題に帰着させて解いた後、エッジケースを処理する方法を取る。

    ここで移動先のマスに飴があるかどうかを無視する。
    この場合、行の飴の数がk個なら、列の飴の数はK-k個でなければならない。この
    ように一方の飴の数が決まれば、一意にもう一方の飴の数が決定することができる。
    したがって、
      (計K個の飴を含む行と列の選び方)
          = (k個の飴を含む行数) * (K-k個の飴を含む列数)
    で求めることができる。
    
    最後に
    (1) そのマスに飴がない場合
      縦横の飴の総和がK個であれば条件を満たす。
    (2) そのマスに飴がある場合
      縦横の飴の総和がK+1個であれば条件を満たす。
    ことに注意する。
    
    各入力（移動先のマスに飴があるマス）に対して、
    (1) 縦横の飴の総和がK個の場合、1を引く。
    (2) 縦横の飴の総和がK+1個の場合、1を足す。

    このような方法の計算量は、O(N+R+C+K)で解くことが可能になる。

    このように特定の条件を無視して問題を解いた後に、その条件を後から適用する
    ことで計算量を減らすことが可能になる。
    
  実装
    入力と共に、各行・各列の飴の総和を計算する。-> O(N)
    最後に入力の情報（飴があるマスの情報）が必要になるため、保持しておく。

    特定の飴の数を含む行数・列数をカウントする。-> O(R+C)

    飴の総和がK個になるパターンをカウントする。-> O(K)

    最後に飴があるマスに関して必要な条件の処理を行う。-> O(N)
*/

#include<iostream>
#include<vector>
using namespace std;

int R, C, K, N, r, c;

int main() {
  scanf("%d%d%d%d", &R, &C, &K, &N);
  vector<pair<int,int>> pairs;
  long long rsum[100001] = {0};
  long long csum[100001] = {0};

  for (int n = 0; n < N; ++n) {
    scanf("%d%d", &r, &c);
    --r; --c; // 0-indexed
    pairs.push_back(make_pair(r, c));
    rsum[r] += 1;
    csum[c] += 1;
  }

  long long rcnt[100001] = {0};
  for (int r = 0; r < R; ++r) {
    rcnt[rsum[r]] += 1;
  }

  long long ccnt[100001] = {0};
  for (int c = 0; c < C; ++c) {
    ccnt[csum[c]] += 1;
  }

  long long cnt = 0;
  for (int i = 0; i <= K; ++i) {
    cnt += rcnt[i] * ccnt[K - i]; 
  }

  for (int n = 0; n < N; ++n) {
    long long s = rsum[pairs[n].first] + csum[pairs[n].second];
    if (s == K) cnt -= 1;
    else if (s == K + 1) cnt += 1;
  }

  printf("%lld\n", cnt);
  return 0;
}