/*
  AtCoder Beginner Contest 099
  C - Strange Bank
*/

#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int MAX_INT = numeric_limits<int>::max();
int N;
vector<int> vec6, vec9;

int getMinTimes(int n, int idx6, int idx9) {
  if (n < 6) return n;

  while (1) {
    if (idx6 == -1) break;
    if (vec6[idx6] <= n) break;
    idx6 -= 1;
  }
  
  while (1) {
    if (idx9 == -1) break;
    if (vec9[idx9] <= n) break;
    idx9 -= 1;
  }

  int buf6 = MAX_INT, buf9 = MAX_INT;
  if (idx6 != -1) buf6 = getMinTimes(n - vec6[idx6], idx6, idx9);
  if (idx9 != -1) buf9 = getMinTimes(n - vec9[idx9], idx6, idx9);
  
  if (buf6 < buf9) return buf6 + 1;
  else return buf9 + 1;
}

int main() {
  scanf("%d", &N);
  
  int base;

  base = 1;
  while (base * 6 <= N) {
    base *= 6;
    vec6.push_back(base);
  }

  base = 1;
  while (base * 9 <= N) {
    base *= 9;
    vec9.push_back(base);
  }

  int idx9 = vec9.size() - 1, idx6 = vec6.size() - 1;
  printf("%d\n", getMinTimes(N, idx6, idx9));

  return 0;
}

