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
	cin >> N;

	switch (N % 10) {
		case 0:
			cout << "pon" << endl;
			break;
		case 1:
			cout << "pon" << endl;
			break;
		case 2:
			cout << "hon" << endl;
			break;
		case 3:
			cout << "bon" << endl;
			break;
		case 4:
			cout << "hon" << endl;
			break;
		case 5:
			cout << "hon" << endl;
			break;
		case 6:
			cout << "pon" << endl;
			break;
		case 7:
			cout << "hon" << endl;
			break;
		case 8:
			cout << "pon" << endl;
			break;
		case 9:
			cout << "hon" << endl;
			break;
	}

	return 0;
}
