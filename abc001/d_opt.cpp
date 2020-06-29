/*
  AtCoder Beginner Contest 001
  D - 感雨時刻の整理
*/


// imos method
#include<iostream>
#include<cmath>
using namespace std;

int N;
char record[10];
int imos[12 * 24 + 2] = {0};

int ctoi(char c) {
  return (int)c - (int)'0';
}

pair<int,int> getTime(int offset) {
  return make_pair(
    ctoi(record[offset + 0]) * 10 + ctoi(record[offset + 1]), 
    ctoi(record[offset + 2]) * 10 + ctoi(record[offset + 3])
  ); 
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%s", record);
    pair<int,int> start = getTime(0);
    pair<int,int> end = getTime(5);

    int s_idx = start.first * 12 + start.second / 5;
    int e_idx =   end.first * 12 +   end.second / 5;
    if (end.second % 5 != 0) e_idx += 1;

    imos[s_idx] += 1;
    imos[e_idx] += -1;
  }

  for (int i = 1; i < 12*24+2; ++i) imos[i] += imos[i-1];

  bool bRain = false;
  for (int i = 0; i < 12*24+2; ++i) {
    if (!bRain && imos[i] != 0) {
      bRain = true;
      printf("%04d-", ((i * 5) / 60) * 100 + (i * 5) % 60);
    }
    else if (bRain && imos[i] == 0) {
      bRain = false;
      printf("%04d\n", ((i * 5) / 60) * 100 + (i * 5) % 60);
    }
  }

  return 0;
}
