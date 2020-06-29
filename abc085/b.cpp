/*
  AtCoder Beginner Contest 085
  B - Kagami Mochi
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N;
vector<int> d;

int main() {
  scanf("%d", &N);

  int buf;
  int count = 0;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &buf);
    if (find(d.begin(), d.end(), buf) == d.end()) {
      ++count;
      d.push_back(buf);
    }
  }

  printf("%d\n", count);
  return 0;
}
