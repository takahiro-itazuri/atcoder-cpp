/*
  AtCoder Beginner Contest 079
  C - Train Ticket

  方針
    演算子（op）は3つしかない。各演算子につき、プラス（+）もしくはマイナス
    （-）を選択すればよい。したがって、O(2^3)を全探索すればよい。
  
  実装
    方針の通りに実行する。
*/

#include<iostream>
#include<string>
using namespace std;

string str;
int ABCD[4];

int main() {
  cin >> str;

  for (int i = 0; i < 4; ++i) {
    ABCD[i] = (int)(str[i] - '0');
  }

  // 0: +, 1: -
  for (int i = 0; i <= 1; ++i) {
    for (int j = 0; j <= 1; ++j) {
      for (int k = 0; k <= 1; ++k) {
        int buf = ABCD[0];
        buf = i ? buf + ABCD[1] : buf - ABCD[1];
        buf = j ? buf + ABCD[2] : buf - ABCD[2];
        buf = k ? buf + ABCD[3] : buf - ABCD[3];
        if (buf == 7) {
          printf("%d", ABCD[0]);
          if (i) printf("+");
          else printf("-");
          printf("%d", ABCD[1]);
          if (j) printf("+");
          else printf("-");
          printf("%d", ABCD[2]);
          if (k) printf("+");
          else printf("-");
          printf("%d=7\n", ABCD[3]);
          return 0;
        }        
      }
    }
  }

  return 0;
}