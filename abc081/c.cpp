/*
  AtCoder Beginner Contest 081
  C - Not so Diverse

  方針
    数の少ない数字が書かれたボールを最も数の多い数字に書き換えるのが効率が良い。
    数字の種類は関係なく、各数字が書かれている数のみが必要である。
  
  実装
    1. unordered_mapに各数字がいくつ書かれているかを格納する。
    2. 各数字の数に関して、降順にソートする。
    3. 数字の種類数がK個になるように、数の総和を取る。
*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int N, K, A;
unordered_map<int, int> A_map;
vector<int> A_cnt;

int main() {
  scanf("%d %d", &N, &K);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A);
    auto itr = A_map.find(A);
    if (itr != A_map.end()) itr->second += 1;
    else A_map[A] = 1;
  }

  for (auto& itr : A_map) A_cnt.push_back(itr.second);
  sort(A_cnt.begin(), A_cnt.end());

  int cnt = 0;
  if ((int)A_cnt.size() - K > 0) {
    for (int i = 0; i < A_cnt.size() - K; ++i) cnt += A_cnt[i];
  }

  printf("%d\n", cnt);
  return 0;
}