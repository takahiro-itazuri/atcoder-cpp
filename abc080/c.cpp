/*
  AtCoder Beginner Contest 080
  C - Shopping Street

  方針
    すべてで2^10=1024通りであるため、全探索が可能である。

  実装
    1024通りを10重ループで書くのは面倒である。
    そこでビットを使用するとコードがすっきりする。
    今回は固定長ビットなので、bitsetを使用するのも可。
*/

#include<iostream>
#include<limits>
#include<bitset>
#include<vector>
using namespace std;

int N;
int F[100] = {0};
int P[100][11] = {0};

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 10; ++j) {
      int f;
      scanf("%d", &f);
      if (f) F[i] += (1 << j);
    }
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 11; ++j) {
      scanf("%d", &P[i][j]);
    }
  }


  int maxval = numeric_limits<int>::min();
  for (int p = 1; p != (1 << 10); p += 1) { // 全探索
    int val = 0;
    for (int n = 0; n < N; ++n) {
      int f = p & F[n]; // 重複したビット
      
      // 1になっているビットの数を数える
      int cnt = 0;
      for (int b = 1; b != (1 << 10); b <<= 1) {
        if (b & f) cnt += 1;
      }
      
      val += P[n][cnt];
    }

    maxval = max(maxval, val);
  }

  printf("%d\n", maxval);
  return 0;
}
