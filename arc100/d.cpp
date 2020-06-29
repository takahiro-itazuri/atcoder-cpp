/*
  AtCoder Regular Contest 100
  D - Equal Cut
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits>
using namespace std;

unsigned int N;
long long A[200001];
unsigned int l, c, r;

long long getVal() {
  long long prev_diff, curr_diff;
  long long cval = A[c], eval = A[N];

  // left side
  prev_diff = numeric_limits<long long>::max();
  while (1) {
    curr_diff = abs((cval - A[l]) - (A[l] - 0));
    if (curr_diff > prev_diff) {
      --l;
      break;
    }

    prev_diff = curr_diff;
    ++l;
    if (l >= c) {
      --l;
      break;
    }
  }

  // right side
  prev_diff = numeric_limits<long long>::max();
  while(1) {
    curr_diff = abs((eval - A[r]) - (A[r] - cval));
    if (curr_diff > prev_diff) {
      --r;
      break;
    }

    prev_diff = curr_diff;
    ++r;
    if (r >= N) {
      --r;
      break;
    }
  }

  // calc val
  long long sum[4];
  sum[0] = A[l] - 0;
  sum[1] = cval - A[l];
  sum[2] = A[r] - cval;
  sum[3] = eval - A[r];
  long long maxval = *max_element(sum, sum+4);
  long long minval = *min_element(sum, sum+4);
  return maxval - minval;
}

int main() {
  scanf("%u", &N);

  A[0] = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%lld", &A[i+1]);
    A[i+1] += A[i];
  }

  long long minval = numeric_limits<long long>::max();
  for (l = 1, c = 2, r = 3; c <= N - 2; ++c) {
    if (r <= c) r = c + 1;   
    long long val = getVal();
    if (val < minval) minval = val;
  }

  printf("%llu\n", minval);
  return 0;
}
