/*
  AtCoder Beginner Contest 001
  C - 風力観測
*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int Deg, Dis;
char Dirs[16][4] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
int Ws[13] = {0, 15, 93, 201, 327, 477, 645, 831, 1029, 1245, 1467, 1707, 1959};

int main() {
  scanf("%d%d", &Deg, &Dis);

  int Dir = ((Deg * 10 + 1125) % 36000) / 2250;

  int W;
  for (W = 12; W >= 0; --W) {
    if (Ws[W] <= Dis) break;
  }

  if (W == 0) printf("C 0\n");
  else printf("%s %d\n", Dirs[Dir], W);
  return 0;
}
