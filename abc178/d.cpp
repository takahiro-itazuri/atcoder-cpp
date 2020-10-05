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

int main() {
	ll S;
	cin >> S;
	vector<ll> dp(S + 1, 0);
	dp[0] = 1;
	ll cum = 0;
	for (int i = 1; i <= S; ++i) {
		if (i - 3 >= 0) {
			cum += dp[i - 3];
			cum %= mod;
		}
		dp[i] = cum;
	}
	cout << dp[S] << endl;
	return 0;
}
