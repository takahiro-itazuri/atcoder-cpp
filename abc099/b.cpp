/*
  AtCoder Beginner Contest 099
  B - Stone Monument
*/

#include<iostream>
#include<vector>
using namespace std;

int a, b;
int t[999];

int main() {
  scanf("%d%d", &a, &b);

  t[0] = 1;
  for (int i = 2; i < 1000; ++i) t[i-1] = t[i-2] + i;
 
  printf("%d\n", t[b-a-1] - b);
  return 0;
}

