#include<iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;
  cout << (B - A) * (B - A + 1) / 2 - B << endl;

  return 0;
}
