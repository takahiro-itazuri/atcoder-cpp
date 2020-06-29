/*
  AtCoder Beginner Contest 089
  B - Hina Arare
*/

#include<iostream>
using namespace std;

int N;
char S;

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%c ", &S);
    if (S == 'Y') {
      printf("Four\n");
      return 0;
    }
  }

  printf("Three\n");
  return 0;
}