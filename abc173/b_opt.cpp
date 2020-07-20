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
	int N;
	string buf;
	map<string, int> cnt;

	cin >> N;
	REP (i, N) {
		cin >> buf;
		++cnt[buf];
	}

	for (string s : {"AC", "WA", "TLE", "RE"}) {
		cout << s << " x " << cnt[s] << endl;
	}

	return 0;
}
