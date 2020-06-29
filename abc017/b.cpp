/*
  AtCoder Beginner Contest 017
  B - choku語
*/

#include<iostream>
using namespace std;

char X[51];

int main() {
  scanf("%s", X);

  int idx = 0;
  while (X[idx] != '\0') {
    if (!(X[idx] == 'c' || X[idx] == 'o' || X[idx] == 'k' || X[idx] == 'u')) {
      printf("NO\n");
      return 0;
    }

    if (X[idx] == 'c') {
      if (X[idx+1] != 'h') {
        printf("NO\n");
        return 0;
      }
      idx += 1;
    }

    idx += 1;
  }

  printf("YES\n");
  return 0;
}