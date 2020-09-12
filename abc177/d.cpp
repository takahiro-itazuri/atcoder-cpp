#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

struct UnionFind {
	vector<int> d;
	UnionFind(int n): d(n, -1) {}
	int root(int x) {
		if (d[x] < 0) return x;
		return d[x] = root(d[x]);
	}
	int unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;
		if (d[x] > d[y]) swap(x, y);
		d[x] += d[y];
		d[y] = x;
		return true;
	}
	bool same(int x, int y) { return root(x) == root(y); }
	int size(int x) { return -d[root(x)]; }
};

int main() {
	int N, M;
	cin >> N >> M;

	UnionFind uf(N);
	REP(i, M) {
		int A, B;
		cin >> A >> B;
		--A; --B;
		uf.unite(A, B);
	}

	int ans = 0;
	REP(i, N) ans = max(ans, uf.size(i));

	cout << ans << endl;
	return 0;
}
