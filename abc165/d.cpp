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
	ll A, B, N;
	ll maxval = numeric_limits<ll>::min(), val;
	cin >> A >> B >> N;

	if (B <= N) {
		val = (A * (B - 1)) / B;
	}
	else {
		val = ((A * N) / B) - (A * (N / B));
	}

	cout << val << endl;
	return 0;
}

/*
 * I = floor(A * x / B) - A * floor(x / B) とする。
 *
 * 区間 B * y <= x < B * (y + 1) を考える。
 * この区間では、floor(x / B) = y となるため、A * floor(x / B) = A * y となる。
 * 次に、この区間で floor (A * x / B) の最大値は、x = B * (y + 1) - 1 のときに現れ、
 * またその値は
 * 　floor(A * x / B) = floor(A * (B * (y + 1) - 1) / B)
 *                    = floor(A * B * y + A * (B - 1) / B)
 *                    = A * y + floor(A * (B - 1) / B)
 * となる。
 * 以上から、この区間における I の最大値は、floor(A * (B - 1) / B) となり、
 * この値は y に依存しないことがわかる。
 */
