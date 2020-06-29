#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

int main() {
	string S, T;
	cin >> S >> T;

	int cnt = 0;
	for (int i = 0; i < S.length(); ++i) {
		if (S[i] != T[i]) cnt += 1;
	}

	cout << cnt;
	return 0;
}
