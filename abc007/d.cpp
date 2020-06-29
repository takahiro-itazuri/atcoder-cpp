/*
  AtCoder Beginner Contest 007
  D - 禁止された数字
*/

#include<iostream>
#include<string>
using namespace std;

unsigned long long getNumTaboo(unsigned long long x) {
  string s = to_string(x);
  int len = s.size();

  unsigned long long dp[20][2][2] = {0};
  /*
    桁DP (Digit DP)
    dp[上位から見た桁数][x未満かどうか][4or9を含むか] := 4か9を含んでいるものの総数
  */
  dp[0][0][0] = 1;
  for (int i = 0; i < len; ++i) for (int j = 0; j < 2; ++j) for (int k = 0; k < 2; ++k) {
    /*
      j == 1 ならば、現在の状態でx未満になることが確定しているから、どんな数字を選択してもよい
      j == 0 ならば、x未満かどうかがまだ決まっていないので、0から現在の数字までに限定して調べる
    */
    int lim = j ? 9 : s[i] - '0';
    for (int d = 0; d < lim + 1; ++d) {
      dp[i+1][j || d<lim][k || d==4 ||  d==9] += dp[i][j][k];
    }
  }

  unsigned long long result = 0;
  for (int j = 0; j < 2; ++j) result += dp[len][j][1];
 
  return result;
}

int main() {
  unsigned long long A, B;
  scanf("%llu%llu", &A, &B);
  printf("%llu\n", getNumTaboo(B) - getNumTaboo(A-1));
  return 0;
}
