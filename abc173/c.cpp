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
	int h, w, k;
	cin >> h >> w >> k;

	vector<string> s(h);
	REP(i, h) cin >> s[i];

	int ans = 0;
	REP(is, 1 << h) REP (js, 1 << w) {
		int cnt = 0;
		REP(i, h) REP(j, w) {
			if ((is >> i) & 1) continue;
			if ((js >> j) & 1) continue;
			if (s[i][j] == '#') cnt++;
		}
		if (cnt == k) ans++;
	}
	cout << ans << endl;

	return 0;
}
