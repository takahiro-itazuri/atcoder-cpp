/*
  AtCoder Beginner Contest 114
  B - 754

  方針

  実装

*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
  string s;
  cin >> s;

  int minval = 1e9;
  for (int i = 0; i < s.length() - 2; ++i) {
    int val = abs(753 - stoi(s.substr(i, 3)));
    if (val < minval) minval = val;
  }

  printf("%d\n", minval);
  return 0;
}
