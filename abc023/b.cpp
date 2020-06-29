/*
  AtCoder Beginner Contest 023
  B - 手芸王

  方針
    手順の通りになっているかを確認すればよい。
  
  実装
    文字列の長さは偶数になり得ないので、その時点で-1を出力する。

    文字列の真ん中は必ず'b'であり、それを基準すると、前方向は'b','a','c'の
    順番で文字が出現し、後ろ方向は'b','c','a'の順番で文字が出現しなければ
    ならない。
*/

#include<iostream>
#include<string>
using namespace std;

int N;
char s[101];

int main() {
  scanf("%d", &N);
  scanf("%s", s);

  if (N % 2 == 0) {
    printf("-1\n");
    return 0;
  }

  int offset = N / 2;
  int idx = 0;
  char p1[3] = {'b', 'a', 'c'}, p2[3] = {'b', 'c', 'a'};
  for (int i = 0; i <= offset; ++i, idx = (idx + 1) % 3) {
    if ((s[offset - i] != p1[idx]) || (s[offset + i] != p2[idx])) {
      printf("-1\n");
      return 0;
    }
  }

  printf("%d\n", offset);
  return 0;
}