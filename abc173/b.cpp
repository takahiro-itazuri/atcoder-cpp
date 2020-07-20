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
	string buf;
	int cnt[4] = {0};
	string names[4] = { "AC", "WA", "TLE", "RE" };
 
	cin >> N;
	REP (i, N) {
		cin >> buf;
		REP (j, 4) {
			if (buf == names[j]) {
				cnt[j]++;
				break;
			}
		}
	}
 
	REP (i, 4) {
		cout << names[i] << " x " << cnt[i] << endl;
	}
 
	return 0;
}
