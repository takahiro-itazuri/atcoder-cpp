/*
  AtCoder Beginner Contest 086
  Traveling
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct {
  int x = 0;
  int y = 0;
} Pos;

int N, t, x, y;
int pre_t = 0, pre_x = 0, pre_y = 0;

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d%d%d", &t, &x, &y);
    int remain = (t - pre_t) - abs(x - pre_x) - abs(y - pre_y);
    if (remain < 0 || remain % 2 != 0) {
      printf("No\n");
      return 0;
    }

    pre_t = t;
    pre_x = x;
    pre_y = y;
  }

  printf("Yes\n");
  return 0;
}