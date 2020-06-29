/*
  AtCoder Beginner Contest 021
  C - 正直者の高橋くん

  方針
    最短経路を探索する場合、幅優先探索が有効である。
    町bから探索し、各町にそこにたどり着くまでの最短経路の数を保持しておく。
    町aを到着する経路が見つかった時点で探索を終了し、町aに当直する最短経路
    の総和を計算する。
    
  実装
    町bを出発し、町aに到着するまで、幅優先探索を行う。
    unordered_mapを使って、Keyに町の番号、Valueに最短経路の数を保持する。
    unordered_mapは、O(1)で既出であるかどうかを判定することができる。
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

long long mod = 1000000007;
int N, a, b, M, x, y;

int main() {
  scanf("%d%d%d%d", &N, &a, &b, &M);
  --a; --b;

  vector<vector<int>> path(N, vector<int>());
  for (int m = 0; m < M; ++m) {
    scanf("%d%d", &x, &y);
    --x; --y;

    path[x].push_back(y);
    path[y].push_back(x);
  }

  unordered_map<long long, long long> map, new_map;
  map[b] = 1;
  bool flag = true;

  while (flag) {
    for (auto itr : map) {
      for (auto n : path[itr.first]) {
        if (n == a) flag = false;

        auto p = new_map.find(n);
        if (p == new_map.end()) new_map[n] = itr.second;
        else new_map[n] += itr.second;

        new_map[n] = new_map[n] % mod;
      }
    }

    map = new_map;
    new_map.clear();
  }

  long long cnt = 0;
  for (auto itr: map) {
    if (itr.first == a) cnt = (cnt + itr.second) % mod;
  }

  printf("%d\n", (int)cnt);
  return 0;
}