/*
  AtCoder Beginner Contest 100
  D - Patisserie ABC
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

long long N, M;

long long getVal(vector<long long>& vec, long long M) {
  long long val = 0;
  sort(vec.begin(), vec.end(), greater<long long>());
  for (long long i = 0; i < M; ++i) {
    val += vec[i];
  }
  return val;
}

int main() {
  scanf("%lld%lld", &N, &M);

  vector<long long> ppp(N), npp(N), pnp(N), ppn(N), nnp(N), npn(N), pnn(N), nnn(N);
  long long x, y, z;
  for (long long i = 0; i < N; ++i) {
    cin >> x >> y >> z;
    ppp[i] = +x +y +z;
    npp[i] = -x +y +z;
    pnp[i] = +x -y +z;
    ppn[i] = +x +y -z;
    nnp[i] = -x -y +z;
    npn[i] = -x +y -z;
    pnn[i] = +x -y -z;
    nnn[i] = -x -y -z;
  }

  long long maxval = 0, val;
  
  val = getVal(ppp, M);
  if (maxval < val) maxval = val;
  val = getVal(npp, M);
  if (maxval < val) maxval = val;
  val = getVal(pnp, M);
  if (maxval < val) maxval = val;
  val = getVal(ppn, M);
  if (maxval < val) maxval = val;
  val = getVal(nnp, M);
  if (maxval < val) maxval = val;
  val = getVal(npn, M);
  if (maxval < val) maxval = val;
  val = getVal(pnn, M);
  if (maxval < val) maxval = val;
  val = getVal(nnn, M);
  if (maxval < val) maxval = val;

  printf("%lld\n", maxval);
  return 0;
}
