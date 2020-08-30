#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

ll myabs(ll a) {
	if (a < 0) return -a;
	else return a;
}

int main() {
	ll X, K, D;
	cin >> X >> K >> D;

	if (X < 0) X = -X;

	ll ans, N = X / D;
	if (K <= N) ans = X - K * D;
	else {
		if ((K - N) % 2 == 0) ans = X - N * D;
		else ans = - (X - (N + 1) * D);
	}

	cout << ans << endl;
	return 0;
}
