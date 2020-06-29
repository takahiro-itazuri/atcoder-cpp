/*
  AtCoder Beginner Contest 114
  C - 755

  方針
    '7','5','3'しか数字しかないと考えるとよい。
    与えられた数字を超えるまで、小さい方から順番に数え上げていく。

  実装
    深さ優先探索を用いるとよい。
*/

#include<iostream>
using namespace std;

long long N, ans;

void dfs(long long n, bool seven, bool five, bool three) {
  if (n <= N) {
    if (seven && five && three) ++ans;
  }
  else return;

  dfs(n * 10 + 7, true, five, three);
  dfs(n * 10 + 5, seven, true, three);
  dfs(n * 10 + 3, seven, five, true);
}

int main() {
  scanf("%d", &N);
  dfs(0, false, false, false);
  
  printf("%d\n", ans);
  return 0;
}
