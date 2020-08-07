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
        ll N, K;
        cin >> N >> K;
 
        vector<ll> A(N+1, 0);
        FOR(i, 1, N+1) cin >> A[i];
 
        // before loop
        vector<ll> label(N+1, 0);
        ll n = 1;
        ll cnt = 0;
        while (K > 0) {
                if (label[n] != 0) {
                        break;
                }
                label[n] = cnt++;
                n = A[n];
		--K;
        }

	if (K == 0) {
		cout << n << endl;
		return 0;
	}
 
	// after loop
        ll loop_size = cnt - label[n];
	
	K %= loop_size;
	while (K) {
		n = A[n];
		--K;
	}

	cout << n << endl;
        return 0;
}
