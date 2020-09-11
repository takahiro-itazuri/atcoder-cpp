#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)
#define fi first
#define se second
#define mp make_pair
//#define DEBUG

void showCost(vector<vector<int>>& cost) {
	cout << "=== cost ===" << endl;
	REP(h, cost.size()) {
		REP(w, cost[0].size()) {
			cout << cost[h][w] << "\t";
		}
		cout << endl;
	}
}

int main() {
	int H, W, Ch, Dh, Cw, Dw;
	cin >> H >> W >> Ch >> Cw >> Dh >> Dw;
	--Ch, --Cw, --Dh, --Dw;

	vector<vector<bool>> stage(H, vector<bool>(W, true));
	{
		char c;
		REP(h, H) REP(w, W) {
			cin >> c;
			if (c == '#') stage[h][w] = false;
		}
	}

	vector<vector<int>> cost(H, vector<int>(W, 1000000));

	deque<pii> q;
	q.emplace_back(Ch, Cw);
	cost[Ch][Cw] = 0;

	int zh[4] = {0, -1, 0, 1};
	int zw[4] = {-1, 0, 1, 0};
	int oh[20] = {-2, -2, -2, -2, -2, -1, -1, -1, -1,  0,  0,  1,  1,  1,  1,  2,  2,  2,  2,  2};
	int ow[20] = {-2, -1,  0,  1,  2, -2, -1,  1,  2, -2,  2, -2, -1,  1,  2, -2, -1,  0,  1,  2};

	while (!q.empty()) {
		pii p = q.front();
		q.pop_front();

		int cp = cost[p.fi][p.se];

		// cost 0
		REP(i, 4) {
			int h = p.fi + zh[i], w = p.se + zw[i];
			if (h < 0 || H <= h || w < 0 || W <= w) continue;
			if (!stage[h][w]) continue;
			if (cost[h][w] <= cp) continue;
			cost[h][w] = cp;
			q.emplace_front(h, w);
		}

		// cost 1
		REP(i, 20) {
			int h = p.fi + oh[i], w = p.se + ow[i];
			if (h < 0 || H <= h || w < 0 || W <= w) continue;
			if (!stage[h][w]) continue;
			if (cost[h][w] <= cp + 1) continue;
			cost[h][w] = cp + 1;
			q.emplace_back(h, w);
		}
	}

#ifdef DEBUG
	showCost(cost);
#endif

	if (cost[Dh][Dw] == 1000000) cout << "-1" << endl;
	else cout << cost[Dh][Dw] << endl;

	return 0;
}
