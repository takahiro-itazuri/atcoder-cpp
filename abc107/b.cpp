/*
  AtCoder Beginner Contest 107
  B - Grid Compression

  方針
    各行、各列について、黒いマスを含むがどうかを先に保持しておく。
    黒が存在する行もしくは列であれば、表示する。

  実装
    特になし。
*/

#include<bits/stdc++.h>
using namespace std;

int H, W;

int main() {
  scanf("%d%d", &H, &W);
  // true: 黒, false: 白
  vector<vector<bool>> a(H, vector<bool>(W, false));
  // true: 黒を含む, false: 全部白
  vector<bool> col(W, false), row(H, false);

  for (int h = 0; h < H; ++h) {
    string buf;
    cin >> buf;
    for (int w = 0; w < W; ++w) {
      if (buf[w] == '#') {
        a[h][w] = true;
        col[w] = true;
        row[h] = true;
      }
    }
  }

  for (int h = 0; h < H; ++h) {
    if (!row[h]) continue;
    for (int w = 0; w < W; ++w) {
      if (!col[w]) continue;
      if (a[h][w]) printf("#");
      else printf(".");
    }
    printf("\n");
  }
  
  return 0;
}
