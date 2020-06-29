/*
  AtCoder Beginner Contest 116
  A - Right Triangle

  方針
    直角三角形のうち最長辺以外の２辺が直行しているため、
    その２辺の積の半分を計算すれば良い。

  実装
    特になし。
*/

#include<iostream>
using namespace std;

int main() {
  int AB, BC, CA;
  scanf("%d %d %d", &AB, &BC, &CA);

  if (AB > BC && AB > CA) printf("%d\n", BC * CA / 2);
  else if (BC > AB && BC > CA) printf("%d\n", AB * CA / 2);
  else printf("%d\n", AB * BC / 2); 
  
  return 0;
}
