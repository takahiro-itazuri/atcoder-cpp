/*
  AtCoder Beginner Contest 097
  B - Exponential
*/

#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int X;
vector<int> exps;

int main() {
  scanf("%d", &X);
  
  exps.push_back(1);
  int m = ceil(sqrt(X));
  for (int i = 2; i < m + 1; ++i) {
    int buf = i;
    while (buf * i <= X) {
      buf *= i;
      exps.push_back(buf);
    }
  }

  sort(exps.begin(), exps.end());

  printf("%d\n", exps[exps.size()-1]);
  return 0;
}
