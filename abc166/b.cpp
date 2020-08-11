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

	int d, A;
	vector<int> check(N, 1);
	REP(k, K) {
		cin >> d;
		REP(i, d) {
			cin >> A;
			check[A-1] = 0;
		}
	}

	cout << accumulate(check.begin(), check.end(), 0) << endl;

	return 0;
}
