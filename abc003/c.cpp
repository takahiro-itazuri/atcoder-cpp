/*
  AtCoder Beginner Contest 003
  C - AtCoderプログラミング講座
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

unsigned int N, K;
unsigned int R[4000];

int main() {
  scanf("%u%u", &N, &K);
 
  for (int i = 0; i < N; ++i) {
    scanf("%u", &R[i]);
  }

  sort(R, R+N);
  double rate = 0.0;
  for (int i = 1; i <= K; ++i) {
    rate += (double)R[N - i] / (double)pow(2, i);
  }
  
  printf("%.6f\n", rate);
  return 0;
}

