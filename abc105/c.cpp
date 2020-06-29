/*
  AtCoder Beginner Contest 105
  C - Base -2 Number
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long N;
vector<long long> base;

int main() {
  scanf("%lld", &N);

  long long buf = -2;
  base.push_back(1);
  while (abs(buf) < 10000000000LL) {
    base.push_back(buf);
    buf *= -2;
  }


  if (N == 0) printf("0\n");

  int idx = 0;
  long long n = 2;
  vector<bool> ans;
  while (N != 0) {
    long long remain = N % n;

    if (remain != 0) {
      ans.push_back(true);
      N -= base[idx];
    }
    else {
      ans.push_back(false);
    }

    idx += 1;
    n *= 2;
  }

  reverse(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); ++i) {
    if (ans[i]) printf("1");
    else printf("0");
  }
  printf("\n");
  return 0;
}
