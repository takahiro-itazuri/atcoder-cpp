#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define REP(i,n) FOR(i,0,n)

int N;
int pre_a = 0, cur_a;

int main() {
  scanf("%d", &N);

  int count = 0;
  REP(i,N) {
    scanf("%d", &cur_a);
    if (pre_a == cur_a) {
      ++count;
      pre_a = 0;
    }
    else pre_a = cur_a;
  }

  printf("%d\n", count);
  return 0;
}
