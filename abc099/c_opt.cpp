#include<iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  int res = N;

  for (int i = 0; i <= N; ++i) {
    int cc = 0;

    // pay (i) yen by 6
    int t = i;
    while (t > 0) {
      cc += t % 6;
      t /= 6;
    }

    // pay (N - i) yen by 9
    t = N - i;
    while (t > 0) {
      cc += t % 9;
      t /= 9;
    }

    if (res > cc) res = cc;
  }

  cout << res << endl;
  return 0;
}
