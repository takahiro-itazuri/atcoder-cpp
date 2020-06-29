#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

void solve(ll n) {
	n -= 1;
	if (n >= 26) {
		solve(n / 26);
	}

	cout << (char)('a' + n % 26);
}

int main() {
	ll N;
	cin >> N;

	solve(N);
	cout << endl;

	return 0;
}
