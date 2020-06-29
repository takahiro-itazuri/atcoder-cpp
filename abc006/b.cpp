/*
  AtCoder Beginner Contest 006
  B - トリボナッチ数列
*/

#include<iostream>
#include<vector>
using namespace std;

int base = 10007, n;
unsigned long long a[1000000];

int main() {
  scanf("%d", &n);
  a[0] = 0, a[1] = 0, a[2] = 1;
  for (int i = 3; i < n; ++i) a[i] = (a[i-1] + a[i-2] + a[i-3]) % base;
  
  printf("%llu\n", a[n-1]);
  return 0;
}
