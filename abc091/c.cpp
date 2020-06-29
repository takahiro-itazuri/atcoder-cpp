/*
  AtCoder Beginner Contest 091
  C - 2D Plane 2N Points
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<pair<int,int>> red, blue;

int main() {
  scanf("%d", &N);
  int x, y;
  for (int i = 0; i < N; ++i) {
    scanf("%d%d", &x, &y);
    red.push_back(make_pair(x,y));
  }
  for (int i = 0; i < N; ++i) {
    scanf("%d%d", &x, &y);
    blue.push_back(make_pair(x,y));
  }

  sort(red.begin(), red.end());
  sort(blue.begin(), blue.end());

  int count = 0;
  vector<bool> unused(N, true);
  for (int b = 0; b < N; ++b) {
    int pos = -1;
    int max_y = -1;
    for (int r = 0; r < N; ++r) {
      if (red[r].first >= blue[b].first) break;
      if (!unused[r]) continue;

      if (red[r].second < blue[b].second && red[r].second > max_y) {
        pos = r;
        max_y = red[r].second;
      }
    }

    if (pos != -1) {
      ++count;
      unused[pos] = false;
    }
  }

  printf("%d\n", count);
  return 0;
}
