/*
  AtCoder Beginner Contest 018
  A - 豆まき
*/

#include<iostream>
#include<algorithm>
using namespace std;

int scores[3];

int main() {
  scanf("%d%d%d", &scores[0], &scores[1], &scores[2]);

  int maxval = *max_element(scores, scores + 3);
  int minval = *min_element(scores, scores + 3);

  for (int i = 0; i < 3; ++i) {
    if (scores[i] == maxval) printf("1\n");
    else if (scores[i] == minval) printf("3\n");
    else printf("2\n");
  }

  return 0;
}