/*
  AtCoder Beginner Contest 010
  A - ハンドルネーム
*/

#include<iostream>
#include<string>
using namespace std;

string S;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> S;
  S += "pp";
  printf("%s\n", S.c_str());
  return 0;
}
