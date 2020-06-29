/*
  AtCoder Beginner Contest 106
  D - AtCoder Express 2

  方針
    クエリが大量に出る問題は全探索では無理であることが多い。
    このような場合、短時間で探索できるようなメモを生成する方法が多く取られる。
    
    今回はNxNの二次元のメモを考える。
    区間L~Rを走る各列車があった場合、座標(L, R)に1を足す。
    この操作をすべての列車に行うことでメモが完成する。

    次にクエリ(p, q)が与えられたとき、
    (p, p), (p, q), (q, p), (q, q)で作られる正方形に囲まれる列車の数が解となる。

    このとき1つのクエリに対して最大でNxNだけ探索する必要がある。
    したがって、
      メモを作る計算量はO(N^2)であり、
      各クエリに対して解を得る計算量はO(QN^2)である。

  実装
    各クエリに対して解を得る際に
      1次元累積和を用いると、計算量がO(N)
      2次元累積和を用いると、計算量がO(1)
    に減らすことができます。

    今回は2次元累積和を用いた実装をする。 
*/

#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class CumulativeSum2D {
public:
  CumulativeSum2D(int N): N(N), memo(vector<vector<T>>(N+1, vector<T>(N+1, 0))) {}
  
  T operator()(int l, int r) {
    return memo[l][r];
  }

  void add(int l, int r) {
    memo[l][r] += 1;
  }

  void build() {
    for (int k = 1; k <= N; ++k) {
      for (int i = 1; k + i <= N; ++i) {
        int j = i + k;
        // 区間(i, j)に包含される列車は(Lがi以上)かつ(Rがj以下)の電車である。
        // そのような列車の二次元累積和を取る。
        memo[i][j] += memo[i + 1][j] + memo[i][j - 1] - memo[i + 1][j - 1];
      }
    }
  }

private:
  int N;
  vector<vector<T>> memo;
};

int N, M, Q;
int L, R;
int p, q;

int main() {
  scanf("%d%d%d", &N, &M, &Q);
  
  CumulativeSum2D<int> cs(N);
  for (int i = 0; i < M; ++i) {
    scanf("%d%d", &L, &R);
    cs.add(L, R);
  }
  cs.build();

  for (int i = 0; i < Q; ++i) {
    scanf("%d%d", &p, &q);
    printf("%d\n", cs(p, q));
  }

  return 0;
}
