/*
  AtCoder Beginner Contest 105
  D - Candy Distribution
*/

#include<iostream>
#include<unordered_map>
using namespace std;

long long N, M, A;
unordered_map<long long, long long> hm; // mod Mが同じになる累積和の数

int main() {
  scanf("%lld %lld", &N, &M);

  long long buf = 0;
  hm[0] = 1;
  for (int i = 0; i < N; ++i) {
    scanf("%lld", &A);
    
    long long mod = (buf + A) % M;

    auto itr = hm.find(mod);
    if (itr != hm.end()) itr->second += 1;
    else hm[mod] = 1;  

    buf += A;
  }

  long long cnt = 0;
  for (auto itr = hm.begin(); itr != hm.end(); ++itr) {
    cnt += itr->second * (itr->second - 1) / 2LL;
  }

  printf("%lld\n", cnt);
  return 0;
}
