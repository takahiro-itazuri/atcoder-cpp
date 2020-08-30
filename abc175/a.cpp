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
	string S;
	cin >> S;

	if (S == "RRR") cout << 3 << endl;
	else if (S == "SSS") cout << 0 << endl;
	else if (S == "RRS" | S == "SRR") cout << 2 << endl;
	else cout << 1 << endl;

	return 0;
}
