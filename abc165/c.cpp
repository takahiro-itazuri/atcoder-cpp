#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

int N, M, Q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A) {
	if (A.size() == N + 1) {
		int now = 0;
		REP(i, Q) {
			if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
		}
		ans = max(ans, now);
		return;
	}

	A.push_back(A.back());
	while (A.back() <= M) {
		dfs(A);
		A.back()++;
	}
}

int main() {
	cin >> N >> M >> Q;
	a = b = c = d = vector<int>(Q);
	REP(i, Q) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}

	dfs(vector<int>(1, 1));
	cout << ans << endl;
	return 0;
}
