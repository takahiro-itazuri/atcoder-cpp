#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

void get_comb(int N, vector<vector<int>>& comb);
void sub_get_comb(int n, vector<int> c, int N, vector<vector<int>>& comb);


int main() {
	int H, W, K;
	cin >> H >> W >> K;
	vector<vector<int>> c(H, vector<int>(W));
	int cnt = 0;
	int ans = 0;

	REP (i, H) {
		string buf;
		cin >> buf;

		REP (j, W) {
			if (buf[j] == '#') {
				c[i][j] = 1;
				++cnt;
			}
		}
	}

	/* まず、あり得る組み合わせを全部列挙してしまう */
	vector<vector<int>> combH;
	vector<vector<int>> combW;

	get_comb(H, combH);
	get_comb(W, combW);

	REP(i, combH.size()) {
		REP(j, combW.size()) {
			vector<vector<int>> _c = c;
			int _cnt = cnt;

			REP(k, combH[i].size()) {
				REP(l, W) {
					if (_c[combH[i][k]][l] == 1) {
						--_cnt;
						_c[combH[i][k]][l] = 2;
					}
				}
			}

			REP(k, combW[j].size()) {
				REP(l, H) {
					if (_c[l][combW[j][k]] == 1) {
						--_cnt;
						_c[l][combW[j][k]] = 2;
					}
				}
			}

			if (_cnt == K) ++ans;
		}
	}

	cout << ans << endl;
	return 0;
}


void get_comb(int N, vector<vector<int>>& comb) {
	REP(i, N + 1) {
		sub_get_comb(i, vector<int>(0), N, comb);
	}
}

void sub_get_comb(int n, vector<int> c, int N, vector<vector<int>>& comb) {
	if (n == 0) {
		comb.push_back(c);
//		REP(i, c.size()) cout << c[i] << " ";
//		cout << endl;
		return;
	}

	if (c.size() == 0) {
		REP(i, N) {
			vector<int> _c = c;
			_c.push_back(i);
			sub_get_comb(n - 1, _c, N, comb);
		}
	}
	else {
		FOR(i, c[c.size() - 1] + 1, N) {
			vector<int> _c = c;
			_c.push_back(i);
			sub_get_comb(n - 1, _c, N, comb);
		}
	}
}

