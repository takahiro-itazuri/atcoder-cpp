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
	int N, K;
	cin >> N >> K;
	vector<int> p(N);
	REP(i, N) cin >> p[i];

	sort(p.begin(), p.end());
	int ans = 0;
	REP(i, K) ans += p[i];

	cout << ans << endl;
	return 0;
}
