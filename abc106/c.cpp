/*
  AtCoder Beginner Contest 106
  C - To Infinity

  方針
    まず5000兆日という以上に大きな数字であることに着目する。
    i番目の文字S[i]に対して、5000兆日後はS[i]^{5*10^16}文字の長さになるため、
    S[i]が2以上であれば、10^18の範囲を超える。

  実装
    (1) S[0] != '1'のとき
      ans = S[0]
    (2) S[0] == '1'のとき
      if K文字目まで'1'
        ans = '1'
      else
        ans = '1'でなくなった位置の文字
      

    10^18であるため型に注意して実装する。
*/

#include<iostream>
#include<string>
using namespace std;

string S;
long long K;

int main() {
  cin >> S >> K;

  if (S[0] == '1') {
    for (long long i = 1; i < K; ++i) {
      if (S[i] != '1') {
        printf("%c\n", S[i]);
        return 0;
      }
    }
    printf("1\n");
  }
  else printf("%c\n", S[0]);

  return 0;
}
