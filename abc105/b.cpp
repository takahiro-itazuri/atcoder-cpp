/*
  AtCoder Beginner Contest 105
  B - Cakes and Donuts
*/

#include<iostream>
using namespace std;

int N;

int main() {
  scanf("%d", &N);

  int n; // 7ドルのドーナッツの個数
  if (N % 2 == 0) n = 0;
  else n = 1;

  while (n * 7 <= N) {
    if ((N - n * 7) % 4 == 0) {
      printf("Yes\n");
      return 0;
    }

    n += 2;
  }

  printf("No\n");
  return 0;
}
