/*
  AtCoder Beginner Contest 103
  A - Task Scheduling Problem
*/

#include<iostream>
#include<algorithm>
using namespace std;

int A1, A2, A3;

int main() {
  scanf("%d%d%d", &A1, &A2, &A3);
  int ans = max({A1, A2, A3}) - min({A1, A2, A3});
  printf("%d\n", ans);
  return 0;
}
