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
	int N, M;
	cin >> N >> M;
	vector<pair<int, bool>> H(N, pair<int, bool>(0, true));
	REP(n, N) cin >> H[n].first;

	int A, B;
	REP(m, M) {
		cin >> A >> B;
		--A;
		--B;

		if (H[A].first <= H[B].first) H[A].second = false;
		if (H[B].first <= H[A].first) H[B].second = false;
	}

	int cnt = 0;
	REP(n, N) {
		if (H[n].second) ++cnt;
	}
	cout << cnt << endl;

	return 0;
}
