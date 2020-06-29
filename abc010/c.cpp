/*
 AtCoder Beginner Contest 010
 C - 浮気調査
*/

#include<iostream>
#include<cmath>
using namespace std;

int txa, tya, txb, tyb, T, V, n;
int x, y;

int main() {
  scanf("%d%d%d%d%d%d%d", &txa, &tya, &txb, &tyb, &T, &V, &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &x, &y);
    double dist = sqrt(pow(txa - x, 2) + pow(tya - y, 2)) + sqrt(pow(txb - x, 2) + pow(tyb - y, 2));
    if (dist <= V * T) {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  return 0;
}
