#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)
const ll mod = 1e9 + 7;

ll powmod(ll x, ll n) {
	ll res = 1;
	for (ll i = 0; i < n; ++i) {
		res = res * x % mod;
	}
	return res;
}

int main() {
	ll N;
	cin >> N;
	ll ans = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
	ans = ((ans % mod) + mod) % mod;
	cout << ans << endl;
	return 0;
}
