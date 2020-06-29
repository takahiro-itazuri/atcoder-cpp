/*
  AtCoder Beginner Contest 110
  C - String Transformation

  方針
    一致させらないパターンを考える。

    1) 文字列の長さが異なる場合
    2) 特定の文字がS内に複数存在し、それらと同じ位置にあるT内の文字が異なる場合
    3) 特定の文字がT内に複数存在し、それらと同じ位置にあるS内の文字が異なる場合

  実装
    a~zの各文字がどの位置にあるかを格納する変数を用意する。
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
  string S, T;
  cin >> S >> T;

  if (S.length() != T.length()) {
    printf("No\n");
    return 0;
  }

  vector<int> pos_S[26], pos_T[26];
  for (int i = 0; i < S.length(); ++i) {
    pos_S[S[i] - 'a'].push_back(i);
    pos_T[T[i] - 'a'].push_back(i);
  }

  bool bCheck = true;
  
  // S -> T
  for (int i = 0; i < 26; ++i) {
    if (pos_S[i].size() >= 2) { // 同じ文字が２つ以上ある場合
      char s = T[pos_S[i][0]];
      for (int j = 1; j < pos_S[i].size(); ++j) {
        if (s != T[pos_S[i][j]]) bCheck = false;
      }
    }
  }

  // T -> S
  for (int i = 0; i < 26; ++i) {
    if (pos_T[i].size() >= 2) { // 同じ文字が２つ以上ある場合
      char s = S[pos_T[i][0]];
      for (int j = 1; j < pos_T[i].size(); ++j) {
        if (s != S[pos_T[i][j]]) bCheck = false;
      }
    }
  }

  if (bCheck) printf("Yes\n");
  else printf("No\n");
  return 0;
}

