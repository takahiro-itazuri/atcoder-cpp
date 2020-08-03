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
	int N, D;
	cin >> N >> D;

	int cnt = 0;
	REP(i, N) {
		double X, Y;
		cin >> X >> Y;
		double d = sqrt(X * X + Y * Y);
		if (d <= D) cnt++;
	}

	cout << cnt << endl;
	return 0;
}
