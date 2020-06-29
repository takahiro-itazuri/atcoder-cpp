/*
  AtCoder Beginner Contest 099
  D - Good Grid
*/

#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int N, C;
int D[30][30];
int c[3][500] = {0};

int main() {
  scanf("%d%d", &N, &C);
  
  for (int i = 0; i < C; ++i) for (int j = 0; j < C; ++j) scanf("%d", &D[i][j]);
  
  int buf;
  for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) {
    scanf("%d", &buf);
    for (int k = 0; k < C; ++k) c[((i+1)+(j+1))%3][k] += D[buf-1][k];
  }

  int minval = numeric_limits<int>::max();
  for (int i = 0; i < C; ++i) for (int j = 0; j < C; ++j){
    if(i!=j) {
      for (int k = 0; k < C; ++k){
        if(i!=k && j!=k) {
          int val = c[0][i] + c[1][j] + c[2][k];
          if (val < minval) minval = val;
        }
      }
    }
  }

  printf("%d\n", minval);
  return 0;
}

