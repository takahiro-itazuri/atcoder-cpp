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
	vector<ll> A(N);
	REP(i, N) cin >> A[i];

	sort(A.rbegin(), A.rend());

	ll ans = A[0];
	N -= 2;
	int i = 1;
	while (N != 0) {
		if (N == 1) {
			ans += A[i];
			N -= 1;
			i++;
		}
		else {
			ans += 2 * A[i];
			N -= 2;
			i++;
		}
	}

	cout << ans << endl;

	return 0;
}
