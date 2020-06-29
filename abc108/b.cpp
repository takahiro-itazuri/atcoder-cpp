/*
  AtCoder Beginner Contest 108
  B - Ruined Square

  方針
    (x1, y1)と(x2, y2)を結ぶベクトルを(vx, vy)とする。
    このベクトルを反時計回りに90度回転させると(-vy, vx)
    となる。さらに反時計回りに90度回転させると(-vx, -vy)
    となる。
  
  実装
    (x1, y1)と(x2, y2)を結ぶベクトルを求めた後、
    (x3, y3)、(x4, y4)と順番に回転させたベクトルを足していく。
*/

#include<iostream>
using namespace std;

int x1, x2, x3, x4;
int y1, y2, y3, y4;

int main() {
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

  int vx = x2 - x1, vy = y2 - y1;
  x3 = x2 - vy;
  y3 = y2 + vx;
  x4 = x3 - vx;
  y4 = y3 - vy;
  
  printf("%d %d %d %d\n", x3, y3, x4, y4);
  return 0;
}
