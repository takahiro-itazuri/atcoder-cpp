/*
  AtCoder Beginner Contest 085
  D - Katana Thrower
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, H;
vector<int> a, b;

int main() {
  scanf("%d %d", &N, &H);

  for (int i = 0; i < N; ++i) {
    int a_, b_;
    scanf("%d %d", &a_, &b_);
    a.push_back(a_);
    b.push_back(b_);
  }

  // bを昇順にソート
  sort(b.begin(), b.end(), greater<int>());
  // aの最強の刀
  int strongest_a = *max_element(a.begin(), a.end());

  int cnt = 0;
  for (int i = 0; i < b.size(); ++i) {
    if (b[i] < strongest_a) break;

    H -= b[i];
    cnt += 1;
    if (H <= 0) break;
  }

  if (H > 0) cnt += (H + strongest_a - 1) / strongest_a;

  printf("%d\n", cnt);
  return 0;
}