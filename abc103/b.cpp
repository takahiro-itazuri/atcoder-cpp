/*
  AtCoder Beginner Contest 103
  B - String Rotation
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int length = S.length();
  for (int offset = 0; offset < length; ++offset) {
    bool bCheck = true;
    for (int i = 0; i < length; ++i) {
      if (S[i] != T[(offset + i) % length]) {
        bCheck = false;
        break;
      }
    }

    if (bCheck == true) {
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");
  return 0;
}
