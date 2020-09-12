#include <bits/stdc++.h>
using namespace std;

int main() {
	int deg, dis;
	cin >> deg >> dis;

	string dirs[16] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
	int ws[12] = {25, 155, 335, 545, 795, 1075, 1385, 1715, 2075, 2445, 2845, 3265};

	deg = ((deg * 10 + 1125) % 36000) / 2250;

	dis *= 100;
	int w;
	for (w = 0; w < 12; ++w) {
		if (dis < ws[w] * 60) break;
	}

	if (w == 0) cout << "C 0" << endl;
	else cout << dirs[deg] << " " << w << endl;

	return 0;
}
