/*
  AtCoder Beginner Contest 109
  D - Make Them Even

  方針
    偶数枚のコインが置かれたマスの数を最大化するには、奇数枚のコインが置か
    れたマス（以降、奇数マス）から他の奇数マスに移動すればよい。

    ただし、移動について「まだ選んだことのないマスしか選択できない」という
    制約がある。

    問題を簡略化するため、できるだけ同じ行にある奇数マス同士間でコインを移
    動させることを考える。すると、
    (1) 同じ行に奇数マスが偶数個ある場合
        同じ行内で移動をすべて完結させることができる。
    (2) 同じ行に奇数マスが奇数個ある場合
        1マスだけ奇数マスが残る。
    
    ある行について、左から順番に奇数マスとその一番近くの右にある奇数マス同
    士で移動するとした場合、同じ行に奇数マスが奇数個ある行は、一番右の奇数
    マスだけが残ることになる。

    そして次に、奇数マスが奇数個ある行の一番右にある奇数マスについて、行を
    またいで移動することを考える。左の奇数マスから右の奇数マスへコインを移
    動させる場合、一番右側の列はかならずまだ選択されていないことになる。
    したがって、上から順番に余った奇数マスから
    (1) 一番右に移動する
    (2) 最も近くにある奇数マスの行まで下に移動する
    (3) 奇数マスにたどり着くまで左に移動する
    という操作を繰り返せばよいことがわかる。

  実装
    上記の方針の通りに実装すればよい。
    出力として最初に移動回数を出力しなければならないため、vectorに移動内
    容を入れておく。
*/

#include<iostream>
#include<vector>
using namespace std;

typedef struct {
  int x;
  int y;
} Pos;

int H, W, a;
vector<vector<int>> procs; // procs[i]: i番目の移動内容

int main() {
  scanf("%d%d", &H, &W);

  vector<Pos> odds; // 奇数マス
  for (int h = 1; h <= H; ++h) {
    for (int w = 1; w <= W; ++w) {
      scanf("%d", &a);
      if (a % 2 == 1) odds.push_back(Pos{w, h});
    }
  }

  // 1. できるだけ同じ行内で解決する。
  vector<Pos> remain_odds; // 残った奇数マス
  for (int i = 0; i < odds.size(); ++i) {
    if (i == odds.size() - 1) {
      remain_odds.push_back(odds[i]);
      break;
    }

    if (odds[i].y == odds[i+1].y) { // 同じ行内に奇数マスがある場合
      int y = odds[i].y;
      for (int x = odds[i].x; x < odds[i+1].x; ++x) {
        procs.push_back(vector<int>({y, x, y, x+1}));
      }
      i += 1;
    }
    else { // 同じ行内に奇数マスが残ってない場合
      remain_odds.push_back(odds[i]);
    }
  }

  // 2. 残った奇数マスはできるだけ近い列のものと解決させる。
  for (int i = 0; i + 1 < remain_odds.size(); i += 2) {
    int y1 = remain_odds[i].y;
    int x1 = remain_odds[i].x;
    int y2 = remain_odds[i+1].y;
    int x2 = remain_odds[i+1].x;

    // 2-1. 一番右まで進む。
    int x = x1;
    int y = y1;

    while (x != W) {
      procs.push_back(vector<int>({y, x, y, x+1}));
      x += 1;
    }

    // 2-2. 下に移動する。
    while (y != y2) {
      procs.push_back(vector<int>({y, W, y+1, W}));
      y += 1;
    }

    // 2-3. 左に進む。
    while (x != x2) {
      procs.push_back(vector<int>({y2, x, y2, x-1}));
      x -= 1;
    }
  }

  printf("%d\n", procs.size());
  for (int i = 0; i < procs.size(); ++i) {
    printf("%d %d %d %d\n", procs[i][0], procs[i][1], procs[i][2], procs[i][3]);
  }
  return 0;
}
