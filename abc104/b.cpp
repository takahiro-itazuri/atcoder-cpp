/*
  AtCoder Beginner Contest 104
  B - AcCepted
*/

#include<iostream>
using namespace std;

string S;

int main() {
  cin >> S;

  int cnt = 0;
  bool check = true;

  if (S[0] == 'A') {
    for (int i = 1; i < S.length(); ++i) {
      if ('a' <= S[i] && S[i] <= 'z') continue;
      
      if (2 <= i && i <= S.length() - 2 && S[i] == 'C') ++cnt;
      else check = false; // 範囲内にあるC以外の大文字
    }
  }

  if (check && cnt == 1) printf("AC\n");
  else printf("WA\n");
  return 0;
}
