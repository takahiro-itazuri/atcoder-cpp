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
	int A, B, H, M;
	cin >> A >> B >> H >> M;

	double A_angle = 2.0 * M_PI * H / 12.0 + M_PI / 6.0 * M / 60.0;
	double B_angle = 2.0 * M_PI * M / 60.0;
	double diff_angle = abs(A_angle - B_angle);

	printf("%.10f\n", sqrt(A * A + B * B - 2.0 * A * B * cos(diff_angle)));

	return 0;
}
