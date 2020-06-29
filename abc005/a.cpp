/*
  AtCoder Beginner Contest 005
  A - おいしいたこ焼きの作り方 
*/

#include<iostream>
using namespace std;

int x, y;

int main() {
  scanf("%d %d", &x, &y);
  int res = y / x;
  printf("%d\n", res);
  return 0;
}
