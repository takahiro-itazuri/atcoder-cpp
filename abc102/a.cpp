/*
  AtCoder Beginner Contest 102
  A - Multiple of 2 and N
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int N;

int main() {   
  scanf("%d", &N);
  if (N % 2 == 0) printf("%d\n", N);
  else printf("%d\n", N * 2);
  return 0;
}
