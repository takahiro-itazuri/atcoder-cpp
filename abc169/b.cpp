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
	ll N, A, ans = 1;
	cin >> N;
	REP(i, N) {
		cin >> A;

		if (ans != -1) {
			if (1000000000000000000 / A >= ans) ans *= A;
			else ans = -1;
		}

		if (A == 0) {
			ans = 0;
			break;
		}
	}

	cout << ans << endl;
	return 0;
}
