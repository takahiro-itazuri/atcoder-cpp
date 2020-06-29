/*
  AtCoder Beginner Contest 083
  B - Some Sums  
*/
 
#include<iostream>
using namespace std;
 
int N, A, B;
 
int main() {
  scanf("%d %d %d", &N, &A, &B);
 
  int cnt = 0;
  for (int i = 1; i <= N; ++i) {
    int buf = i;
    int digit = 0;
    while(buf != 0) {
      digit += buf % 10;
      buf /= 10;
    }
    if (A <= digit && digit <= B) cnt += i;
  }
 
  printf("%d\n", cnt);
  return 0;
}
