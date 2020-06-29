/*
  AtCoder Regular Contest 099
  C - Minimization
*/

#include<iostream>
#include<string>
using namespace std;

int N, K;

int main() {
  scanf("%d%d", &N, &K);
  
  string buf;
  getline(cin, buf);

  printf("%d\n", (N - 1 + (K - 2)) / (K - 1));
	return 0;
}
