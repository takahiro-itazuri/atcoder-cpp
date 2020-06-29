/*
  AtCoder Beginner Contest 024
  C - 民族大移動

  方針
    民族が移動可能な領域[l,r]を保持しておく。

    最初民族は[l=S,r=S]にしかいられない。入力[L,R]と移動可能な領域[l,r]が
    重複部分を持つとき、移動可能な領域を更新することが可能である。この[l,r]
    がTを含む場合に、移動が完了する。

    各民族に対して、目的地に到着できる最も早い日を計算するために必要な計算量は
    O(10^4)であるため、全体の計算量はO(10^6)となる。
  
  実装
    各民族ごとに上述の手順を実際に行う。
*/

#include<iostream>
#include<vector>
using namespace std;

int N, D, K, L, R, S, T;
vector<pair<int,int>> open;

int main() {
  scanf("%d%d%d", &N, &D, &K);
  
  // O(10^4)
  for (int d = 0; d < D; ++d) {
    scanf("%d%d", &L, &R);
    open.push_back(make_pair(L, R));
  }

  // O(10^2 * 10^4)
  for (int k = 0; k < K; ++k) {
    scanf("%d%d", &S, &T);
    int l = S, r = S;
    
    for (int d = 0; d < D; ++d) {
      pair<int,int> p = open[d];

      if (p.first <= l && r <= p.second) {
        l = p.first;
        r = p.second;
      }
      else if (p.first <= L && L <= p.second) {
        l = p.first;
      }
      else if (p.first <= R && R <= p.second) {
        r = p.second;
      }

      if (L <= T && T <= R) {
        printf("%d\n", d+1);
        break;
      }
    }
  }

  return 0;
}