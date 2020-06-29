/*
  AtCoder Beginner Contest 108
  C - Triangular Relationship

  方針
    a + b, b + c, c + aがすべてKの倍数となるのは、以下の
    2通りである。
      (1) a, b, cがすべてKの倍数
      (2) Kが偶数 かつ a, b, cがK/2の倍数

  実装
    1~Nの数字でKで割ってk余る数字の数は(N + k) / Kで求まる。
*/

#include<iostream>
using namespace std;

long long N, K;

int main() {
  scanf("%lld%lld", &N, &K);

  long long cnt = 0;
  int n;
  
  // Kで割り切れる数字の数
  n = N / K; 
  cnt += n * n * n;

  if (K % 2 == 0) {
    // すべてがKで割った時にK/2余る数字の数
    n = (N + K / 2) / K;
    cnt += n * n * n;
  }
  
  printf("%lld\n", cnt);
  return 0;
}
