/*
  AtCoder Beginner Contest 015
  A - 高橋くんの研修
*/

#include<iostream>
#include<string>
using namespace std;

string A, B;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> A >> B;

  if (A.length() > B.length()) cout << A << endl;
  else cout << B << endl;
  return 0;
}
