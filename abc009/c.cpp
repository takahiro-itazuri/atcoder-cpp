/*
  AtCoder Beginner Contest 009
  C - 辞書式順序ふたたび
*/

#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define REP(i,n) FOR(i,0,n)

template<class T>
inline void read(T& x) {
  T s = 0, base = 1;
  char c;
  while (!isdigit(c=getchar())) if (c == '-') base = -base;
  while (isdigit(c)) {
    s = s * 10 + (c^48);
    c = getchar();
  }
  x = base * s;
}

template<class T>
inline void print(T x) {
  if (x) {
    print(x / 10);
    putchar(x % 10 + '0');
  }
}

template<class T>
inline void write(T x) { 
  if (x < 0) putchar('-');
  x = abs(x);
  print(x);
}

template<class T>
inline void writeln(T x) {
  if (x < 0) putchar('-');
  x = abs(x);
  print(x);
  putchar('\n');
}

int N, K;
char S[101];

int main() {
  read(N);
  read(K);
  scanf("%s", S);

  if (K == 0) {
    printf("%s\n", S);
    return 0;
  }
  else if (K == N) {
    sort(S, S+N);
    printf("%s\n", S);
    return 0;
  }

  int new_unused[26] = {0};
  int old_unused[26] = {0};
  REP(i,N) {
    new_unused[S[i] - 'a'] += 1;
    old_unused[S[i] - 'a'] += 1;
  }

  char ans[101];
  REP(i,N) {
    // printf("%d-th char ---\n", i);

    bool bCheck = false;
    REP(j,26) {
      int l = int(S[i] - 'a');
      if (new_unused[j] == 0) continue;

      char c = char('a' + j);
      if (c == S[i]) {
        ans[i] = c;
        new_unused[j] -= 1;
        old_unused[j] -= 1;
        break;
      }
      else {
        new_unused[j] -= 1;
        old_unused[l] -= 1;

        int diff = 0;
        REP(k,26) diff += abs(new_unused[k] - old_unused[k]);
        diff /= 2;

        if (K - 1 >= diff) {
          K -= 1;
          ans[i] = c;
          break;
        }
        
        new_unused[j] += 1;
        old_unused[l] += 1;
      }
    }
  }
  ans[N] = '\0';

  printf("%s\n", ans);
  return 0;
}
