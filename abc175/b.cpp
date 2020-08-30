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
	cin >> N;

	vector<int> L(N);
	REP(i, N) cin >> L[i];
	sort(L.begin(), L.end());

	int ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < i; ++j) {
			for (int k = 0; k < j; ++k) {
				if (L[i] == L[j] | L[j] == L[k] | L[k] == L[i]) continue;
				if (L[j] + L[k] > L[i]) ++ans;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
