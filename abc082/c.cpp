/*
  AtCoder Beginner Contest 082
  C - Good Sequence
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> a;

int main() {
  scanf("%d", &N);
  a = vector<int>(N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &a[i]);
  }

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < N; ++i) {
    int cnt = 1;
    int buf = a[i];
    for (int j = i + 1; j < N; ++j) {
      if (a[j] != buf) break;
      ++cnt;
      i = j;
    }

    if (cnt < buf) ans += cnt;
    else if (cnt > buf) ans += (cnt - buf);
  }

  printf("%d\n", ans);
  return 0;
}
