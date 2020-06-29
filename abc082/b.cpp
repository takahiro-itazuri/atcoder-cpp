/*
  AtCoder Beginner Contest 082
  B - Two Anagrams
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string s, t;

int main() {
  cin >> s >> t;

  sort(s.begin(), s.end());                  // 文字列sを使った最小となる文字列
  sort(t.begin(), t.end(), greater<char>()); // 文字列tを使った最大となる文字列


  if (s < t) printf("Yes\n");
  else printf("No\n");
  return 0;
}
