#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; ++i)
using pii = pair<int, int>;

int main() {
	int n;
	cin >> n;

	string str;
	int imos[1442] = { 0 };
	rep(i,n) {
		cin >> str;
		int s, e;
		s = (stoi(str.substr(0, 2)) * 60 + stoi(str.substr(2, 2))) / 5 * 5;
		e = (stoi(str.substr(5, 2)) * 60 + stoi(str.substr(7, 2)) + 4) / 5 * 5;
		imos[s] += 1;
		imos[e+1] -= 1;
	}

	rep(i,1442) imos[i+1] += imos[i];

	bool start = false;
	rep(i,1442) {
		if (!start && imos[i]) {
			printf("%02d%02d-", i/60, i%60);
			start = true;
		}

		if (start && !imos[i]) {
			printf("%02d%02d\n", (i-1)/60, (i-1)%60);
			start = false;
		}
	}

	return 0;
}
