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
	ll N;
	cin >> N;

	if (N == 1) {
		cout << 0 << endl;
		return 0;
	}

	ll ans = 0;
	for (ll i = 2, maxval = sqrt(N); i < maxval; ++i) {
		ll cnt = 0;
		while (N % i == 0) {
			N /= i;
			++cnt;
		}

		ll a = 1;
		while (cnt >= a) {
			cnt -= a;
			++a;
			++ans;
		}
	}

	if (N != 1) ++ans;
	cout << ans << endl;

	return 0;
}
