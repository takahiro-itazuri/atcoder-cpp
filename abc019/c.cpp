/*
  AtCoder Beginner Contest 019
  C - 高橋くんと魔法の箱

  方針
    xと2xに対して同じ出力が得られるということは、
    x, 2x, 4x, 8x, ...に対しても同じ結果が得られることがわかる。
    したがって、入力された値を2でできるだけ割った数がベースとなる数であり、
    ベースとなる数が何種類あったかを数えればよい。

  実装
    既出のベースとなる数をvectorに格納しておく方法で行うと、
    既出であるかどうかの判定の計算量がO(N)となるため、
    TLEになってしまう。

    そこでハッシュ関数を用いるとO(1)で探索可能となる。
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int N, a;
unordered_map<int,int> base;

int main() {
  scanf("%d", &N);
    
  for (int n = 0; n < N; ++n) {
    scanf("%d", &a);
    while (a % 2 == 0) a /= 2;
    if (base.find(a) == base.end()) base[a] = 1;
  }
  
  printf("%d\n", base.size());
  return 0;
}
