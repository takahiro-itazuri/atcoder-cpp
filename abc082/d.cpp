/*
  AtCoder Beginner Contest 082
  D - FT Robot
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string s;
int x, y;
vector<int> xs, ys;
vector<vector<bool>> dpx, dpy;

int main() {
  cin >> s;
  cin >> x >> y;

  int l = s.length();

  // x軸とy軸を独立に考えることができる
  int buf = 0;
  bool dir = true; // true: x, false: y
  for (int i = 0; i < l; ++i) {
    if (s[i] == 'T') {
      if (dir) xs.push_back(buf);
      else ys.push_back(buf);

      dir = !dir;
      buf = 0;
    }
    else {
      buf += 1;
    }
  }

  if (buf != 0) {
    if (dir) xs.push_back(buf);
    else ys.push_back(buf);
  }

  // 各軸ごとにDPをする
  dpx = vector<vector<bool>>(xs.size() + 1, vector<bool>(2 * l + 1, false));
  dpx[1][l + xs[0]] = true;
  for (int i = 1; i < xs.size(); ++i) {
    for (int p = 0; p <= 2 * l; ++p) {
      if (dpx[i][p]) {
        dpx[i + 1][p + xs[i]] = true;
        dpx[i + 1][p - xs[i]] = true;
      }
    }
  }

  dpy = vector<vector<bool>>(ys.size() + 1, vector<bool>(2 * l + 1, false));
  dpy[0][l] = true;
  for (int i = 0; i < ys.size(); ++i) {
    for (int p = 0; p <= 2 * l; ++p) {
      if (dpy[i][p]) {
        dpy[i + 1][p + ys[i]] = true;
        dpy[i + 1][p - ys[i]] = true;
      }
    }
  }

  if (dpx[xs.size()][x + l] && dpy[ys.size()][y + l]) printf("Yes\n");
  else printf("No\n");
  return 0;
}
