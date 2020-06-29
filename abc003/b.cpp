/*
  AtCoder Beginner Contest 003
  B - AtCoderトランプ
*/

#include<iostream>
using namespace std;

char S[11], T[11];

bool checkChar(char c) {
  if (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r') return true;
  else return false;
}

int main() {
  scanf("%s%s", S, T);

  for (int i = 0; S[i] != '\0'; ++i) {
    if (S[i] != T[i]) {
      if (S[i] == '@') {
        if (!checkChar(T[i])) {
          cout << "You will lose" << endl;
          return 0;
        }
      }
      else if (T[i] == '@') {
        if (!checkChar(S[i])) {
          cout << "You will lose" << endl;
          return 0;
        }
      }
      else {
        cout << "You will lose" << endl;
        return 0;
      }
    }
  }

  cout << "You can win" << endl;
  return 0;
}
