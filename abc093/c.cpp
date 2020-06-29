/*
  AtCoder Beginner Contest 093
  C - Same Intergers
*/

#include<iostream>
#include<algorithm>
using namespace std;

int X[3];

int main() {
  scanf("%d%d%d", &X[0], &X[1], &X[2]);
  sort(X, X+3);

  int count = X[2] - X[1];
  X[0] += count;
  int div = (X[2] - X[0]) / 2;
  if (X[2] == X[0] + 2 * div) printf("%d\n", count + div);
  else printf("%d\n", count + div + 2);

  return 0;
}
