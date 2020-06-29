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
	ll sum = 0;
	vector<ll> cnt(100001);
	REP(i, N) {
		cin >> A[i];
		cnt[A[i]] += 1;
		sum += A[i];
	}

	ll Q;
	cin >> Q;
	ll B, C;
	REP(i, Q) {
		cin >> B >> C;
		sum += (C - B) * cnt[B];
		cnt[C] += cnt[B];
		cnt[B] = 0;
		cout << sum << endl;
	}

	return 0;
}
