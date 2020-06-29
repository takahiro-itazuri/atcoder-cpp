/*
  AtCoder Beginner Contest 011
  B - 名前の確認
*/

#include<iostream>
#include<cctype>
using namespace std;

char S[13];

int main() {
  scanf("%s", S);

  S[0] = toupper(S[0]);
  for (int i = 1; i < 13; ++i) {
    if (S[i] == '\0') break;
    S[i] = tolower(S[i]);
  }

  printf("%s\n", S);
  return 0;
}
