/*
  AtCoder Beginner Contest 008
  B - 投票
*/

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int N;
unordered_map<string, int> vote;

int main() {
  scanf("%d", &N);
  string name;
  for (int i = 0; i < N; ++i) {
    cin >> name;
    auto itr = vote.find(name);
    if (itr != vote.end()) {
      itr->second += 1;
    }
    else {
      vote[name] = 1;
    }
  }

  int maxval = 0;
  for (auto itr = vote.begin(); itr != vote.end(); ++itr) {
    if (itr->second > maxval) {
      maxval = itr->second;
      name = itr->first;
    }
  }
  
  printf("%s\n", name.c_str());
  return 0;
}
