#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

//#define DEBUG_MODE

/*
 * 取れる方針は、以下の 3 種類
 * 　1. 全て R にする
 * 　2. 全て W にする
 * 　3. 左側に R、右側に W を寄せる
 */

int main() {
	int N;
	cin >> N;

	string C;
	cin >> C;

	int cnt_W = 0, cnt_R = 0;

	REP(i, N) {
		if (C[i] == 'W') cnt_W++;
		else if (C[i] == 'R') cnt_R++;
	}

	int cnt = 0;
	int l = 0, r = N - 1;
	while (l <= r) {
		// seek l
		while (l <= N - 1 && C[l] == 'R') l++;

		// seek r
		while (0 <= r && C[r] == 'W') r--;

#ifdef DEBUG_MODE
		cout << "l: " << l << ", r: " << r << endl;
#endif
		if (l < r) {
			cnt++;
			l++;
			r--;
		}
		else break;
	}

	cout << min({cnt_R, cnt_W, cnt}) << endl;

	return 0;
}
