/*
  AtCoder Beginner Contest 007
  B - 辞書式順序
*/

#include<iostream>
#include<string>
using namespace std;

string A;

int main() {
  cin >> A;
  if (A.length() == 1) {
    if (A[0] == 'a') printf("-1\n");
    else printf("%c\n", (char)(A[0] - 1)); 
  }
  else {
    A = A.substr(0, A.length() - 1);
    printf("%s\n", A.c_str());
  }

  return 0;
}
