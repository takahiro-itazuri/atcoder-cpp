/*
  AtCoder Beginner Contest 084
  B - Postal Code
*/

#include<iostream>
using namespace std;

int A, B;
string S;

int main() {
  scanf("%d %d", &A, &B);
  cin >> S;

  bool check = true;
  for (int i = 0; i < A; ++i) {
    if (!('0' <= S[i] && S[i] <= '9')) check = false;
  }

  if (S[A] != '-') check = false;

  for (int i = A + 1; i < A + B + 1; ++i) {
    if (!('0' <= S[i] && S[i] <= '9')) check = false;
  }

  if (check) printf("Yes\n");
  else printf("No\n");
  return 0;
}