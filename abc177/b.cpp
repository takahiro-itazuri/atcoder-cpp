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

	int ans = 10000;
	REP(i, S.length() - T.length() + 1) {
		int cnt = 0;
		REP(j, T.length()) {
			if (S[i + j] != T[j]) ++cnt;
		}

		ans = min(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}
