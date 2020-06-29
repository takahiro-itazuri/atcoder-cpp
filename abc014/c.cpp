/*
  AtCoder Beginner Contest 014
  C - AtColor
*/

#include<iostream>
using namespace std;

int n, a, b;
int imos[1000002] = {0};

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &a, &b);
    imos[a] += 1;
    imos[b+1] -= 1;
  }

  int maxval = imos[0];
  for (int i = 0; i < 1000002; ++i) {
    imos[i] += imos[i-1];
    if (imos[i] > maxval) maxval = imos[i];
  }

  printf("%d\n", maxval);
  return 0;
}
