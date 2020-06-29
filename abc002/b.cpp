/*
  AtCoder Beginner Contest 002
  B - 罠
*/

#include<iostream>
using namespace std;

char W[31];

int main() {
  scanf("%s", W);

  for (int i = 0; W[i] != '\0' ; ++i) {
    if (W[i] != 'a' && W[i] != 'i' && W[i] != 'u' && W[i] != 'e' && W[i] != 'o') {
      printf("%c", W[i]);
    }
  }
  printf("\n");

  return 0;
}
