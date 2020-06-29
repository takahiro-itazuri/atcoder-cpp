/*
  AtCoder Beginner Contest 103
  D - Islands War
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, a, b;
vector<pair<int,int>> requests;

int main() {
  scanf("%d%d", &N, &M);
  for (int i = 0; i < M; ++i) {
    scanf("%d%d", &a, &b);
    requests.push_back(make_pair(a,b));
  }

  sort(requests.begin(), requests.end(), [](pair<int,int>& x, pair<int,int>& y) {return (x.second < y.second);});

  int count = 0;
  int buffer = -1;
  for (int i = 0; i < requests.size(); ++i) {
    if (requests[i].first <= buffer && buffer < requests[i].second) continue;

    count += 1;
    buffer = requests[i].second - 1;
  }

  printf("%d\n", count);
  return 0;
}
