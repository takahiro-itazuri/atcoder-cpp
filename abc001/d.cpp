/*
  AtCoder Beginner Contest 001
  D - 風雨時刻の整理
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
char record[10];
vector<pair<int,int>> records;
vector<pair<int,int>> result;

int ctoi(char c) {
  return (int)c - (int)'0';
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%s", record);
    int start, end;

    start = ctoi(record[0]) * 1000 + ctoi(record[1]) * 100 + ctoi(record[2]) * 10 + ctoi(record[3]);
    end   = ctoi(record[5]) * 1000 + ctoi(record[6]) * 100 + ctoi(record[7]) * 10 + ctoi(record[8]);

    start = start - start % 5;
    if (end % 5 != 0) end = end + (5 - end % 5);
    if (end % 100 == 60) end = (end / 100 + 1) * 100;
    records.push_back(make_pair(start, end));
  }

  sort(records.begin(), records.end());

  result.push_back(records[0]);
  int idx = 0;
  for (int i = 1; i < N; ++i) {
    if (records[i].first <= result[idx].second) {
      if (records[i].second > result[idx].second) result[idx].second = records[i].second;
    }
    else {
      result.push_back(records[i]);
      ++idx;
    }
  }

  for (int i = 0; i < result.size(); ++i) printf("%04d-%04d\n", result[i].first, result[i].second);
  return 0;
}
