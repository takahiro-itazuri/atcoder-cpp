/*
  AtCoder Beginner Contest 091
  B - Two Colors Card Game 
*/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int N, M;
map<string,int> st;

int main() {
  string buffer;

  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    cin >> buffer;
    if (st.find(buffer) == st.end()) st[buffer] = 1;
    else st[buffer] += 1;
  }

  scanf("%d", &M);
  for (int i = 0; i < M; ++i) {
    cin >> buffer;
    if (st.find(buffer) == st.end()) st[buffer] = -1;
    else st[buffer] -= 1;
  }

  int maxval = 0;
  for (auto itr = st.begin(); itr != st.end(); ++itr) {
    if (itr->second > maxval) maxval = itr->second;
  }

  printf("%d\n", maxval);
  return 0;
}
