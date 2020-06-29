/*
  AtCoder Beginner Contest 083
  C - Multiple Gift
*/
 
#include<iostream>
using namespace std;
 
template <typename T>
T gcd(T a, T b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while(b != 0) {
    a %= b;
    if (a == 0) return b;
    b %= a;
  }
  return a;
}
 
template <typename T>
T lcm(T a, T b) {
  if (a == 0 && b == 0) return 0;
  return a * b / gcd(a, b);
}
 
long long X, Y;
 
int main() {
  scanf("%lld %lld", &X, &Y);
  
  long long cnt = 1;
 
  // (1) A0はなるべく小さいほうがよい -> A0 = X
  // (2) A_{i+1} > A_{i} を満たす最小のA_{i}の倍数はA_{i} * 2である。
  // (3) A_{i}はA_{j} (1 <= j < i)の倍数であるから、A_{i} * 2もA_{j}の倍数である。
  // 以上から
  //    Xに何回2をかけると、Yを超えるか
  long long buf = X;
  while (1) {
    buf = buf * 2;
    if (buf > Y) break;
    cnt += 1;
  }
 
  printf("%lld\n", cnt);
  return 0;
}
