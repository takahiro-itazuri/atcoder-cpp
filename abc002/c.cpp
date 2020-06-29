/*
  AtCoder Beginner Contest 002
  C - 直訴  
*/

#include<iostream>
#include<cmath>
using namespace std;

double xa, ya, xb, yb, xc, yc;

int main() {
  scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);

  printf("%.1f", fabs((xb - xa) * (yc - ya) - (yb - ya) * (xc - xa)) / 2.0);
  return 0;
}
