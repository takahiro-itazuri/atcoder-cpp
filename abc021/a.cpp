/*
  AtCoder Beginner Contest 021
  A - 足し算

  方針
    1 <= N <= 10であることから、2の累乗（1,2,4,8）はそれぞれ最大1回しか
    使用しなくて良いことがわかる。

  実装
    2の累乗の大きい方から順番に、残りの数以上であれば使用するし、そうでなけ
    れば無視すればよい。
*/

#include<iostream>
#include<vector>
using namespace std;

int powers[4] = {1, 2, 4, 8};
vector<int> ans;
int N;

int main() {
  scanf("%d", &N);

  for (int i = 3; i >= 0; --i) {
    if (N >= powers[i]) {
      N -= powers[i];
      ans.push_back(powers[i]);
    }
  }

  printf("%d\n", ans.size());
  for (int i = 0; i < ans.size(); ++i) printf("%d\n", ans[i]);
  return 0;
}