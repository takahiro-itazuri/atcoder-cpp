/*
  AtCoder Beginner Contest 006
  A - 世界のFizzBuzz
*/

#include<iostream>
using namespace std;

int N;

bool checkHasThree(int x) {
  while(x != 0) {
    if (x % 10 == 3) return true;
    x /= 10;
  }
  return false;
}

int main() {
  int N;
  scanf("%d", &N);

  if (checkHasThree(N) || N % 3 == 0) printf("YES\n");
  else printf("NO\n");

  return 0;
}
