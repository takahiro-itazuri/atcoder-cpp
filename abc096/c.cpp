/*
  AtCoder Beginner Contest 096
  C - Grid Repainting 2
*/

#include<iostream>
#include<string>
using namespace std;

int H, W;
bool s[52][52] = {0}; // true: black, false: white

bool check(int y, int x) {
  return (s[y-1][x] || s[y+1][x] || s[y][x-1] || s[y][x+1]);
}

int main() {
  scanf("%d%d", &H, &W);
  char buf[51];
  for (int y = 1; y <= H; ++y) {
    scanf("%s", buf);
    for (int x = 1; x <= W; ++x) {
      if (buf[x-1] == '#') s[y][x] = true;
    }
  }

  for (int y = 1; y <= H; ++y) for (int x = 1; x <= W; ++x) {
    if (s[y][x] && !check(y,x)) {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
  return 0;
}
