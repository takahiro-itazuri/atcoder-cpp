/*
  AtCoder Beginner Contest 017
  C - ハイスコア
*/

#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int l, r, s;
long long imos[100002];

int main() {
  scanf("%d%d", &N, &M);
  long long ans = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d%d%d", &l, &r, &s);
    imos[l] += s;
    imos[r+1] -= s;
    ans += s;
  }

  for (int i = 1; i <= M+1; ++i) {
    imos[i] += imos[i-1];
  }

  ans -= *min_element(imos+1, imos+M+1);
  printf("%lld\n", ans);
  return 0;
}