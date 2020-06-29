/*
  AtCoder Regular Contest 097
  C - K-th Substring
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int comp(string& a, string& b) {
  if (a == b) return 0;
 
  int la = a.length(), lb = b.length();
  for(int i = 0; i < la && i < lb; ++i) {
    if (a[i] != b[i]) {
      return (a[i] > b[i]) ? 1 : -1; 
    }
  }
  
  return (la > lb) ? 1 : -1;
}
 
string s;
int K;
 
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  cin >> s >> K;
  vector<string> v;
 
  int L = s.length();
  for (int l = 1; l <= K; ++l) {
    for (int i = 0; i <= L - l; ++i) {
      string ss = s.substr(i,l);
 
      if (v.empty()) v.push_back(ss);
      else {
        int idx;
        for(idx = v.size() - 1; idx >= 0; --idx) {
          int res = comp(ss, v[idx]);
          if (res == 0) break; // ss == v[idx]
          else if (res == 1) { // ss > v[idx]
            v.insert(v.begin()+idx+1, ss);
            break;
          }
        }
        
        if (idx == -1) v.insert(v.begin(), ss);
        if (v.size() > K) v.pop_back();
      }
    }
  }
 
  cout << v[K-1] << endl;
  return 0;
}

