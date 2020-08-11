#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (ll i = a; i < b; ++i)
#define FORR(i,a,b) for (ll i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

int main() {
	ll X;
	cin >> X;
	
	FOR(d, 1, 240) {
		for (ll A = -118; A < 120; ++A) {
			ll B = A - d;
			if ((A * A * A * A * A - B * B * B * B * B) == X) {
				cout << A << " " << B << endl;
				break;
			}
		}
	}
	return 0;
}
