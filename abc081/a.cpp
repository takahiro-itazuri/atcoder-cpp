/*
  AtCoder Beginner Contest 081
  A - Placing Marbles

  方針
    入力を受け取った後、'1'の数を数え上げる。
  
  実装
    特になし。
*/

#include<iostream>
#include<string>
using namespace std;

char s[4];

int main() {
  scanf("%s", s);
  int count = 0;
  for (int i = 0; i < 3; ++i) if (s[i] == '1') ++count;
  printf("%d\n", count);
  return 0;
}
