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
	int N, M, K;
	cin >> N >> M >> K;
	vector<ll> A(N + 1), B(M + 1);
	FOR(i, 1, N + 1) cin >> A[i];
	FOR(i, 1, M + 1) cin >> B[i];

	REP(i, N) { A[i + 1] += A[i]; }
	REP(i, M) { B[i + 1] += B[i]; }

	ll ans = 0;
	int j = M;
	REP(i, N + 1) {
		if (A[i] > K) break;
		
		while (A[i] + B[j] > K) j--;
		if (i + j > ans) ans = i + j;
	}

	cout << ans << endl;
	return 0;
}
