/*
  AtCoder Beginner Contest 018
  B - 文字列の反転
*/

#include<iostream>
#include<string>
using namespace std;

string S;
int N, l, r;

int main() {
  cin >> S;
  scanf("%d", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%d %d", &l, &r);
    l -= 1, r -= 1; // 0-indexed

    string sub_S = S.substr(l, r - l + 1);
    for (int p = 0; p <= r - l; ++p) S[l + p] = sub_S[(r - l) - p];
  }

  cout << S << endl;
  return 0;
}