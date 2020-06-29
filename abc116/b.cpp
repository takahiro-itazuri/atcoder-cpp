/*
  AtCoder Beginner Contest 116
  B - Collatz Problem

  方針
    数列を順番に生成していき、既出の要素に一致するものがあるかどうかを判定していく。
    既出の要素との判定を高速化するために二分木を使うとより高速になる。

  実装
    二分木を使用したいとき自分で実装しても良いが、std::mapを用いても良い。
*/

#include<iostream>
#include<map>
using namespace std;

int main() {
  map<int,bool> mp;
  int a;
  scanf("%d", &a);
  mp[a] = true;

  int cnt = 1;
  while (true) {
    cnt += 1;
    if (a % 2 == 0) {
      a = a / 2;
    }
    else {
      a = 3 * a + 1;
    }

    auto itr = mp.find(a);
    if (itr != mp.end()) break;

    mp[a] = true;
  }

  printf("%d\n", cnt);
  return 0;
}
