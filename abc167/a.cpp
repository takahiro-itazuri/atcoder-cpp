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
	string S, T;
	cin >> S >> T;

	bool ans = true;
	REP(i, S.length()) {
		if (S[i] != T[i]) ans = false;
	}

	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
