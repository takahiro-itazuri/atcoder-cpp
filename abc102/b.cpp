/*
  AtCoder Beginner Contest 102
  B - Maximum Difference
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int N;
int minval, maxval;

int main() {
  scanf("%d", &N);

  minval = 1000000001, maxval = -1;
  int buf;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &buf);
    if (buf < minval) minval = buf;
    if (buf > maxval) maxval = buf;
  }

  printf("%d\n", maxval - minval);  
  return 0;
}
