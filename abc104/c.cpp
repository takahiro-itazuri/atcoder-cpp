/*
  AtCoder Beginner Contest 104
  C - All Green
*/

#include<iostream>
#include<limits>
using namespace std;

int D, G;
int p[10], c[10];

int main() {
  scanf("%d%d", &D, &G);
  G /= 100;

  for (int i = 0; i < D; ++i) {
    scanf("%d%d", &p[i], &c[i]);
    c[i] /= 100;
  }

  int ans = numeric_limits<int>::max();
  for (int i = 0; i < (1 << D); ++i) {
    // i: 使いきったか否かを表すビット
    int sum = 0;
    int cnt = 0;

    for (int j = 0; j < D; ++j) {
      if ((i >> j) & 1) {
        sum += p[j] * (j + 1) + c[j];
        cnt += p[j];
      }
    }

    for (int j = D - 1; j >= 0; --j) {
      if (sum >= G) break;
      if ((i >> j) & 1) continue;
      
      int buf = min((G - sum + j) / (j + 1), p[j]);
      cnt += buf;
      sum += (j + 1) * buf;
      if (buf == p[j]) sum += c[j];
    }

    if (G <= sum) ans = min(ans, cnt);
  }

  printf("%d\n", ans);
  return 0;
}
