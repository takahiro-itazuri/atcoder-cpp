/*
  AtCoder Beginner Contest 007
  C - 幅優先探索
*/

#include<iostream>
#include<queue>
using namespace std;

typedef struct {
  int x;
  int y;
} Pos;

int R, C;
int sy, sx;
int gy, gx;
int c[51][51] = {0};

int getPath() {
  queue<Pos> next_pos, curr_pos;
  curr_pos.push(Pos({sx, sy})), c[sy][sx] = -1;
  int count = 0;

  while (1) {
    Pos p = curr_pos.front();
    curr_pos.pop();
    if (p.x == gx && p.y == gy) return count;

    if (c[p.y-1][p.x] == 1) next_pos.push(Pos({p.x, p.y-1})), c[p.y-1][p.x] = -1;
    if (c[p.y+1][p.x] == 1) next_pos.push(Pos({p.x, p.y+1})), c[p.y+1][p.x] = -1;
    if (c[p.y][p.x-1] == 1) next_pos.push(Pos({p.x-1, p.y})), c[p.y][p.x-1] = -1;
    if (c[p.y][p.x+1] == 1) next_pos.push(Pos({p.x+1, p.y})), c[p.y][p.x+1] = -1;

    if (curr_pos.empty()) {
      ++count;
      curr_pos.swap(next_pos);
    }
  }
}

int main() {
  scanf("%d%d%d%d%d%d", &R, &C, &sy, &sx, &gy, &gx);

  char buf;
  for (int y = 1; y < R + 1; ++y) {
    for (int x = 1; x < C + 1; ++x) {
      if (x == 1) getchar();
      scanf("%c", &buf);
      if (buf == '#') c[y][x] = 0;
      else c[y][x] = 1;
    }
  }

  printf("%d\n", getPath());
  return 0;
}
