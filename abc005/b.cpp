/*
  AtCoder Beginner Contest 005
  B - おいしいたこ焼きの食べ方
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int T[100];

int main() {  
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) scanf("%d", &T[i]);
  
  sort(T, T+N);
  printf("%d\n", T[0]);

  return 0;
}
