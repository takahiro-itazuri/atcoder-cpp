/*
  AtCoder Beginner Contest 012
  C - 九九足し算
*/

#include<iostream>
using namespace std;

int N;
int kuku[10][10];

int main() {
  scanf("%d", &N);

  int ans = 2025 - N;
  for (int i = 1; i <= 9; ++i) for (int j = 1; j <= 9; ++j) {
    if (i * j == ans) printf("%d x %d\n", i, j);
  }

  return 0;
}
