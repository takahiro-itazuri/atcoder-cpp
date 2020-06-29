/*
  AtCoder Regular Contest 095
  C - Many Medians
*/

#include<iostream>
#include<algorithm>
using namespace std;

int N;
int X[200000];
int sortedX[200000];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &X[i]);
    sortedX[i] = X[i];
  }
  sort(sortedX, sortedX+N);

  int before_med = sortedX[N/2-1], after_med = sortedX[N/2];
  if (before_med == after_med) {
    for (int i = 0; i < N; ++i) printf("%d\n", before_med);
  }
  else {
    for (int i = 0; i < N; ++i) {
      if (X[i] < after_med) printf("%d\n", after_med);
      else printf("%d\n", before_med);
    }
  }
  return 0;
}
