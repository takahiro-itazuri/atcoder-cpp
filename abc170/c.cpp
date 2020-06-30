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
	int X, N, p;
	bool flag[102] = { false };
	cin >> X >> N;
	REP(i, N) {
		cin >> p;
		flag[p] = true;
	}

	int ans = 0;
	int diff, min_diff = 102;
	REP(i, 102) {
		if (flag[i]) continue;
		diff = abs(X - i);
		if (diff < min_diff) {
			min_diff = diff;
			ans = i;
		}
	}

	cout << ans << endl;
	return 0;
}
