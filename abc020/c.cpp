/*
  AtCoder Beginner Contest 020
  C - 壁抜け

  方針
    xをできるだけ大きく取るためには、スタートからゴールまで最短時間で着かな
    ければならない。最短時間を得る関数をf(x)とする。

    2 <= H, W <= 10と比較的小さい値であるので、特定の値xが与えられたとき、
    f(x)は幅優先探索などを用いて全探索で求めることができる。

    一方で、1 <= x <= T - 1 であることがわかるので、この範囲内で取りうる
    最大のxを探索する問題となる。

  実装
    (1) 全探索
      xを大きい方から全探索した場合、O(T)の探索時間がかかる。
    (2) 二分探索
      x >= 1であることに注意すると、x'>xのときf(x')>f(x)であることがわか
      る。つまり、あるxについて、f(x)>Tのとき解はxより小さく、f(x)<=Tのと
      き解はx以上であることがわかる。

      このようなソートされたような状態を持つ性質から、二分探索が可能であるこ
      とがわかる。
*/

#include<iostream>
#include<vector>
#include<queue>
#include<limits>
using namespace std;

class Pos {
public:
  Pos(): y(0), x(0) {}
  Pos(int y, int x): y(y), x(x) {}

  int y, x;
};

class State {
public:
  State(): p(Pos()), cost(0) {}
  State(int y, int x, long long cost): p(Pos(y, x)), cost(cost) {}
  State(Pos p, long long cost): p(p), cost(cost) {}

  Pos p;
  long long cost;
};

int H, W, T;
vector<vector<bool>> s;
Pos start, goal;

int main() {
  scanf("%d%d%d", &H, &W, &T);

  s = vector<vector<bool>>(H, vector<bool>(W));
  for (int h = 0; h < H; ++h) {
    string buf;
    cin >> buf;

    for (int w = 0; w < W; ++w) {
      if (buf[w] == 'S') start = Pos(h, w);
      else if (buf[w] == 'G') goal = Pos(h, w);
      else if (buf[w] == '.') s[h][w] = false;
      else if (buf[w] == '#') s[h][w] = true;
    }
  }

  // 二分探索
  int lo = 1, hi = T;
  Pos dp[4] = {Pos(1, 0), Pos(-1, 0), Pos(0, -1), Pos(0, 1)};

  while (lo + 1 < hi) { 
    long long cost = (lo + hi) / 2;

    // 幅優先探索
    queue<State> q;
    vector<vector<long long>> costs(H, vector<long long>(W, numeric_limits<long long>::max()));
    costs[start.y][start.x] = 0;
    q.push(State(start, 0));
    while(!q.empty()) {
      State state = q.front();
      q.pop();

      for (int i = 0; i < 4; ++i) {
        int x = state.p.x + dp[i].x;
        int y = state.p.y + dp[i].y;

        if (x < 0 || y < 0 || x >= W || y >= H) continue;

        long long c = s[y][x] ? cost : 1;
        if (state.cost + c < costs[y][x]) {
          costs[y][x] = state.cost + c;
          q.push(State(Pos(y, x), state.cost + c));
        }
      }
    }

    if (costs[goal.y][goal.x] <= T) lo = cost;
    else hi = cost;
  }

  printf("%d\n", lo);
  return 0;
}