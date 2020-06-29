/*
  AtCoder Beginner Contest 016
  C - 友達の友達
*/

#include<iostream>
using namespace std;

int N, M;
int A, B;
int relation[11][11] = {0};

int main() {
  scanf("%d%d", &N, &M);
  for (int i = 0; i < M; ++i) {
    scanf("%d%d", &A, &B);
    relation[A][B] = 1;
    relation[B][A] = 1;
  }

  for (int i = 1; i <= N; ++i) {
    int cnt = 0;
    bool used[11] = {false};

    for (int j = 1; j <= N; ++j) { // friend of i
      if (i == j) continue;

      for (int k = 1; k <= N; ++k) { // friend of friend of i
        if (k == i || k == j) continue;
        if (used[k]) continue;
        
        if (relation[i][j] == 1 && relation[i][k] == 0 && relation[j][k] == 1) {
          cnt += 1;
          used[k] = true;
        }
      }
    }
    printf("%d\n", cnt);
  }

  return 0;
}