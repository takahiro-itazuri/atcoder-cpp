#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

/*
 * まず 7, 77, 777, ... という数列を考えるとき
 * (1) K が 7 の倍数であるとき、1, 11, 111, ... という数列に対して、初めて K / 7 の倍数が登場する状況を考えれば良い
 * (2) K が 7 の倍数でないとき、1, 11, 111, ... という数列に対して、初めて K の倍数が登場する状況を考えれば良い
 *
 * 「1 11 111 1111 約数」とググったところ、これはレピュニット数と呼ばれるもので、
 * 一般項は、Rn = (10^n - 1) / 9 で表すことができる。
 *
 * 以上から、以下のように問題を再定義できる。
 * K が 7 の倍数のとき L = 9 * K / 7、そうでないとき L = 9 * K とおき、10^n を L で割ったときに、余りが 1 になるような最小の整数 n を求めよ。
 *
 * 「割って余りが 1 になる」という見た目から、フェルマーの小定理を思い出すことができると良い。
 * ただし、実際のところは、オイラーの定理が必要となる。
 * 　a^(φ(n)) ≡ 1 (mod n)
 * φ(n) はオイラー関数で、1 から n までの整数で、n と互いに素となるものの個数である。
 * この定理から、少なくとも n = L までには遅くとも求めるべき整数が見つかることが保証される。
 */

int main() {
	ll K;
	cin >> K;

	if (K % 2 == 0) {
		cout << "-1" << endl;
		return 0;
	}

	if (K % 7 == 0) K = 9 * K / 7;
	else K = 9 * K;

	ll remainder = 1;
	FOR(i, 1, K) {
		remainder = (remainder * 10) % K;
		if (remainder == 1) {
			cout << i << endl;
			return 0;
		}
	}

	cout << "-1" << endl;
	return 0;
}
