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
	int N, M, X;
	cin >> N >> M >> X;

	vector<int> C(N);
	vector<vector<int>> A(N, vector<int>(M));
	REP(i, N) {
		cin >> C[i];
		REP(j, M) cin >> A[i][j];
	}


	vector<int> U(M);
	REP(i, N) {
		REP(j, M) {
			U[j] += A[i][j];
		}
	}

	bool check = true;
	REP(i, M) {
		if (U[i] < X) check = false;
	}
	if (!check) {
		cout << "-1" << endl;
		return 0;
	}


	int min_price = numeric_limits<int>::max();
	REP(i, (1 << N)) {
		U = vector<int>(M);
		int price = 0;

		REP(j, N) {
			int mask = 1 << j;
			if ((i & mask) > 0) {
				price += C[j];
				REP(k, M) U[k] += A[j][k];
			}
		}

		check = true;
		REP(j, M) {
			if (U[j] < X) check = false;
		}
		if (check) {
			min_price = min(min_price, price);
		}
	}

	cout << min_price << endl;
	return 0;
}
