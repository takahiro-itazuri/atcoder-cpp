/*
  AtCoder Beginner Contest 011
  C - 123引き算
*/

#include<iostream>
using namespace std;

int N;
int NG[3];
int dp[301];

int main() {
  for (int i = 0; i < 301; ++i) dp[i] = 10000000;

  scanf("%d", &N);
  for (int i = 0; i < 3; ++i) scanf("%d", &NG[i]);

  if (N > 3) {
    dp[N] = 0;
    for (int i = N; i >= 0; --i) {
      if (i != NG[0] && i != NG[1] && i != NG[2]) {
        for (int j = 1; j <= 3; ++j) {
          dp[i - j] = min(dp[i] + 1, dp[i - j]);
        }
      }
    }
  }
  else {
    if (N != NG[0] && N != NG[1] && N != NG[2]) dp[0] = 0;
  }

  if (dp[0] <= 100) printf("YES\n");
  else printf("NO\n");

  return 0;
}
