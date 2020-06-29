/*
  AtCoder Beginner Contest 004
  C - 入れ替え
*/

#include<iostream>
using namespace std;

unsigned int N;

int main() {
  scanf("%u", &N);

  unsigned int quotient = (N / 5) % 6;
  unsigned int remainder = N % 5;

  char result[6];
  for (int i = 0; i < 6; ++i) {
    result[i] = (char)(((i + quotient) % 6 + 1) + '0');
  }

  for (int i = 0; i < remainder; ++i) putchar(result[i+1]); 
  putchar(result[0]);
  for (int i = remainder; i < 6; ++i) putchar(result[i+1]);
  putchar('\n');
  return 0;
}
