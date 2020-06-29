/*
  AtCoder Beginner Contest 109
  B - Shiritori

  方針
    しりとりが成立しているか順番に確かめればよい。

  実装
    既出の単語かどうかを調べる操作はハッシュ連想配列を用いれば、O(1)
    で行える。
*/

#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<string, int> mp;
int N;
string input;

int main() {
  scanf("%d", &N);

  char last;
  for (int i = 0; i < N; ++i) {
    cin >> input;

    if (i != 0) {
      if (input[0] != last) {
        printf("No\n");
        return 0;
      }
    }
    last = input[input.length() - 1];

    auto itr = mp.find(input);
    if (itr != mp.end()) {
      printf("No\n");
      return 0;
    }
    mp[input] = 0;
  }
  
  printf("Yes\n");
  return 0;
}
