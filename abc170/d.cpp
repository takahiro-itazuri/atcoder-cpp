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
	vector<int> A(N);
	REP(i, N) cin >> A[i];

	sort(A.begin(), A.end());
	int maxval = A[N - 1];

	int cnt = 0;
	vector<int> arr(maxval + 1);
	REP(i, N) {
		if (arr[A[i]] == 0) {
			if (i == N - 1) ++cnt;
			else if (A[i] != A[i + 1]) ++cnt;
		}
		for (int a = A[i]; a <= maxval; a += A[i]) arr[a] += 1; 
	}

	cout << cnt << endl;
	return 0;
}
