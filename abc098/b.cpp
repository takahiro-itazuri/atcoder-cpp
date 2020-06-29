/*
  AtCoder Beginner Contest 098
  B - Cut and Count
*/

#include<iostream>
#include<string>
using namespace std;

int N;
char S[101];
int C[100];

int main() {
  scanf("%d", &N);
  scanf("%s", S);
  for (int i = 0; i < N; ++i) C[i] = 1 << (S[i] - 'a');
  
  int s1 = 0x0, s2;
  int maxval = 0;
  for (int i = 1; i < N; ++i) {
    s1 |= C[i-1];
    s2 = 0x0;
    for (int j = i; j < N; ++j)s2 |= C[j];
    int check = s1 & s2;

    int val = 0;
    for (int j = 0; j < 26; ++j) val += (check >> j) & 1;
    if (val > maxval) maxval = val;
  }

  printf("%d\n", maxval);
  return 0;
}
