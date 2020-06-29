/*
  AtCoder Beginner Contest 089
  C - March
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

long long N;
string S;

int main() {
  scanf("%lld", &N);
  long long ans = 0;

  long long n[5] = {0};
  for (int i = 0; i < N; ++i) {
    cin >> S;
    if (S[0] == 'M') n[0] += 1;
    else if (S[0] == 'A') n[1] += 1;
    else if (S[0] == 'R') n[2] += 1;
    else if (S[0] == 'C') n[3] += 1;
    else if (S[0] == 'H') n[4] += 1;
  }

  long long cnt = 0;
  for (int i = 0; i < 5; ++i) {
    for (int j = i + 1; j < 5; ++j) {
      for (int k = j + 1; k < 5; ++k) {
        cnt += n[i] * n[j] * n[k];
      }
    }
  }

  printf("%lld\n", cnt);
  return 0;
}