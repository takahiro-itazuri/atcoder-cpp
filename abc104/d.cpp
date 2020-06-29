/*
  AtCoder Beginner COntest 104
  D - We Love ABC
*/

#include<iostream>
using namespace std;

const int mod = 1000000007;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  // dp[i][j]
  //   i: 先頭からi文字目
  //   j: i-1文字目までについている〇の数
  long long dp[100001][4] = {};
  for (int i = N; i >= 0; --i) {
    for (int j = 3; j >= 0; --j) {
      if (i == N) dp[i][j] = (j == 3) ? 1 : 0;
      else {
        // 〇を付けないパターン
        dp[i][j] = dp[i+1][j] * (S[i] == '?' ? 3 : 1);

        // 〇を付けるパターン
        if (j < 3 && (S[i] == '?' || S[i] == "ABC"[j])) {
          dp[i][j] += dp[i + 1][j + 1];
        }

        dp[i][j] %= mod;
      }
    }
  }

  printf("%d\n", dp[0][0]);
  return 0;
}
