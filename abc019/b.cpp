/*
  AtCoder Beginner Contest 019
  B - 高橋くんと文字列圧縮

  方針
    同じ文字が何文字続くかカウントする。

  実装
    出力内容をストックしておく必要はなく、
    文字が連続しなくなった時点で随時出力して構わない。
*/

#include<iostream>
using namespace std;

char s[1001];

int main() {
  scanf("%s", s);

  int i = 1;
  char buf = s[0];
  int cnt = 1;
  while(s[i] != '\0') {
    if (buf != s[i]) {
      printf("%c%d", buf, cnt);
      buf = s[i];
      cnt = 1;
    }
    else cnt += 1;

    i += 1;
  }
  printf("%c%d\n", buf, cnt);
  return 0;
}
