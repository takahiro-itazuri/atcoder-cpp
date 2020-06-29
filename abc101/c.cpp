/*
  AtCoder Beginner Contest 101
  C - Minimization
*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

unsigned int N, K;

int main() {
  scanf("%u%u", &N, &K);
  
  string buf;
  getline(cin, buf);

  printf("%u\n", (uint)ceil((double)(N - 1) / (double)(K - 1)));
	return 0;
}
