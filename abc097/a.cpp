/*
 AtCoder Beginner Contest 097
 A - Colorful Transceivers
*/

#include<iostream>
#include<cmath>
using  namespace std;

int a, b, c, d;

int main() {
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if (abs(c-a) <= d || (abs(a-b) <= d && abs(c-b) <= d)) printf("Yes\n");
  else printf("No\n");
  return 0;
}
