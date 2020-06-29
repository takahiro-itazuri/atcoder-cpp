/*
  AtCoder Beginner Contest 022
  B - Bumble Bee

  方針
    i > jかつi番目とj番目の花の種類が同じとなる条件を満たすものを数える。
    順番に入力を受け取り、その花の種類が既出であれば条件を満たす。

  実装
    花の各種類の数をカウントする配列を用意すれば、O(1)である種類が既出で
    あるかを判定できる。
*/

#include<iostream>
using namespace std;

int N;
int A[100001] = {0};

int main() {
  scanf("%d\n", &N);

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    int idx;
    scanf("%d", &idx);
    if (A[idx] != 0) cnt += 1;
    A[idx] += 1;
  }

  printf("%d\n", cnt);
  return 0;
}