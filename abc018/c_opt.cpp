/*
  AtCoder Beginner Contest 018
  C - 菱型カウント
*/

#include<iostream>
#include<vector>
using namespace std;

int R, C, K;

template <typename T>
class CumulativeSum2D {
public:
  CumulativeSum2D(int w, int h) : memo(vector<vector<T>> (h + 2, vector<T>(w + 2, 0))), w(w), h(h) {}

  T& operator()(int x, int y) {
    return memo[y][x];
  }

  void add(int x, int y, T num) {
    memo[y][x] += num;
  }

  void build() {
    for (int y = 1; y <= h + 1; ++y) {
      for (int x = 1; x <= w + 1; ++x) {
        memo[y][x] += memo[y][x - 1] + memo[y - 1][x] - memo[y - 1][x - 1];
      }
    }
  }

private:
  vector<vector<T>> memo;
  int w, h;
};

int main() {
  scanf("%d %d %d", &R, &C, &K);

  CumulativeSum2D<int> cs(C, R);
  for (int r = 1; r <= R; ++r) {
    char S[501];
    scanf("%s", S);
    for (int c = 1; c <= C; ++c) {
      if (S[c - 1] == 'o') continue;
      for (int k = -(K - 1); k <= (K - 1); ++k) {
        if (!(1 <= c + k && c + k <= C)) continue;
        cs.add(c + k    , max(1, r - ((K - 1) - abs(k))),  1);
        cs.add(c + k + 1, max(1, r - ((K - 1) - abs(k))), -1);
        cs.add(c + k    , min(R + 1, r + ((K - 1) - abs(k)) + 1), -1);
        cs.add(c + k + 1, min(R + 1, r + ((K - 1) - abs(k)) + 1),  1);
      }
    }
  }

  cs.build();

  int cnt = 0;
  for (int r = K; r <= R - K + 1; ++r) {
    for (int c = K; c <= C - K + 1; ++c) {
      if (cs(c, r) == 0) cnt += 1;
    }
  }

  printf("%d\n", cnt);
  return 0;
}