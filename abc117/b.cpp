/*
  AtCoder Beginner Contest 117
  B - Polygon

  方針
    与えられた長さのうち最大の値とそれ以外の値の合計値を比較する。

  実装
    最大値の取得とその他の合計値を取得する際のfor文との相性を考えると、
    ソートを使うと良い。
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> L;

int main() {
  scanf("%d", &N);
  L = vector<int>(N);
  for (int n = 0; n < N; ++n) scanf("%d", &L[n]);
  
  sort(L.begin(), L.end());
  int sum = 0;
  for (int n = 0; n < N-1; ++n) sum += L[n];

  if (sum > L[N-1]) printf("Yes\n");
  else printf("No\n");
  return 0;
}
