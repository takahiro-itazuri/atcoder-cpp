#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)
int mod = 1000000007;

int main() {
	int N;
	cin >> N;

	vector<ll> A(N);
	ll sum = 0;
	REP(i, N) {
		cin >> A[i];
		sum += A[i];
		sum %= mod; 
	}

	ll ans = 0;
	REP(i, N) {
		sum -= A[i];
		if (sum < 0) sum += mod;

		ans += A[i] * sum;
		ans %= mod;
	}

	cout << ans << endl;
	return 0;
}
