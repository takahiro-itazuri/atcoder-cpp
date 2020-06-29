/*
  AtCoder Beginner Contest 097
  D - Equals
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class DisjointSet {
public:
  DisjointSet(int size): size(size) {
    id.resize(size, -1);
  }

  void unite(int x, int y) {
    x = getId(x);
    y = getId(y);

    if (x != y) {
      if (id[x] > id[y]) swap(x,y);
      id[x] += id[y];
      id[y] = x;
      --size;
    }
  }

  int getId(int x) {
    return id[x] < 0 ? x : id[x] = getId(id[x]);
  }

  void show() {
    printf("\n");
    for (int i = 0; i < id.size(); ++i) printf("%d ", id[i]);
    printf("\n");
  }

private:
  vector<int> id;
  int size;
};

int N, M;
int p[100000];

int main() {
  scanf("%d%d", &N, &M);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &p[i]);
    --p[i];
  }

  DisjointSet ds(N);
  int x, y;
  for (int i = 0; i < M; ++i) {
    scanf("%d%d", &x, &y);
    --x, --y;
    ds.unite(x,y);
    //ds.show();
  }

  int count = 0;
  for (int i = 0; i < N; ++i) if (ds.getId(i) == ds.getId(p[i])) ++count;

  printf("%d\n", count);
  return 0;
}
