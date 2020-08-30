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
	int N, K;
	cin >> N >> K;
	
	vector<ll> C(N), P(N);
	REP(i, N) {
		cin >> P[i];
		P[i] -= 1;
	}
	REP(i, N) cin >> C[i];

	ll ans = numeric_limits<ll>::min();
	REP(sp, N) {
		int x = sp;
		vector<ll> s;
		ll tot = 0;
		do {
			x = P[x];
			s.push_back(C[x]);
			tot += C[x];
		} while (x != sp);

		int l = s.size();
		ll t = 0;
		REP(i, l) {
			if (i + 1 > K) break;
			t += s[i];
			ll now = t;
			if (tot > 0) {
				ll e = (K - (i + 1)) / l;
				now += tot * e;
			}
			ans = max(ans, now);
		}
	}

	cout << ans << endl;
	return 0;
}
