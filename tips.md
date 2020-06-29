# Standard Input/Output
## cin & cout
"cin" and "cout" are input/output functions in "iostream" library of C++.

"cin" is occasionally slow, but it'll be faster by using following code in first.
```cpp
#include<iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  return 0;
}
```

## scanf & printf
"scanf" and "printf" are input/output functions used in C, and they are also available in C++.

"scanf" is normally faster than "cin". So when you implement codes in AtCoder, my recommendation is "scanf" function.

Note: It is known that "scanf" function is insecure when you deal with array of char, because it could cause buffer overflow. In AtCoder, maximum length of input usually is given. So you don't mind this insecurity.

## getline
"getline" is input function in "iostream" library of C++. "getline" can read one line.

## Things to keep in mind
### combination of cin and getline
When you read several inputs with "cin" to the end of line and then read a line with "getline", you should put "cin.ignore()" into before using "getline", as follows.

```cpp
#include<iostream>
using namespace std;

int i;
cin >> i;
cin.ignore();

string s;
getline(cin, s);
```

### input into vector
When you input something into "vector", you need to specify the size of "vector" before input or use "push_back" method via buffer.

```cpp
#include<iostream>
#include<vector>
using namespace std;

// specifying the size of vector in advance.
vector<int> vec(N); // the size is N
for (int i = 0; i < N; ++i) {
  cin >> vec[i];
}

// using push_back method via buffer
vector<int> vec;
for (int i = 0; i < N; ++i) {
  int buf;
  cin >> buf;
  vec[i] = buf;
}
```

### input string into array of char
When you input a string (N characters) into an array of "char", you need to prepare the array of "char" with N + 1 elements. This is because the array of "char" has a termination character ('\0').

```cpp
#include<iostream>
using namespace std;

// max length of input string
#define N 100

char S[N+1];
scanf("%s", S);
```

# cmath
"cmath" library has a set of functions to computer common mathematical operations.

## pow
You should note that "pow" function is available only to floating point number. If you use "pow" function for interger number, the following code is useful.

```cpp
#include<cmath>

result = (int)(pow(base, 2) + 0.5);
```

# algorithm
## sort
```cpp
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec;

// ascending order
sort(vec.begin(), vec.end());

// descending order
sort(vec.begin(), vec.end(), greater<int>());
```

## max & min
```cpp
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec;

// iterator of max element
vector<int>::iterator iter = max_element(vec.begin(), vec.end());

// convert interator into index
int idx = distance(vec.begin(), idx);
```

## permutation
```cpp
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> vec(N);
for (int i = 0; i < N; ++i) vec[i] = i;

do {
  // processing
} while (next_permutation(vec.begin(), vec.end()));
```

# string
## generate substring
```cpp
#include<string>
using namespace std;

string s;
string subs = s.substr(pos, len);
```

## convert string to int
```cpp
#include<string>
using namespace std;

string s;
int i = stoi(s);
```

## convert array of char to int
```cpp
#include<cstlib>

char s[];
int i = atoi(s);
```

# Data Type Ranges
|type|byte|range|order|
|----|----|-----|-----|
|char|1|-128~127|O(10^2)|
|signed char|1|-128~127|O(10^2)|
|unsigned char|1|0~255|O(10^2)|
|short|2|-32768~32767|O(10^4)|
|unsigned short|2|0~65535|O(10^4)|
|int|4|-2147483648~2147483647|O(10^9)|
|unsigned int|4|0~4294967295|O(10^9)|
|long long|8|-9223372036854775808~9223372036854775807|O(10^18)|
|unsigned long long|8|0~18446744073709551615|O(10^19)|
|float|4|1.17549e-38~3.40282e+38|O(10^-38~10^38)|
|double|8|2.27507e-308~1.79769e+308|O(10^-308~10^308)|
|long double|16|3.3621e-4932~1.18973e+4932|O(10^-4932~10^4932)|

# bitset
"bitset" library represents a fixed size sequence of N bits.

## Bit Operator
|operator|description|
|--------|-----------|
|&|AND|
|&#124;|OR|
|^|XOR|
|~|NOT|
|<<|Left Shift|
|>>|Right Shift|

## count
cout method returns the number of bits set to 1.

```cpp
#include<bitset>
using namespace std;

bitset<8> x;
int cnt = x.count();
```

## standard output of integer as bit
```cpp
#include<iostream>
#include<bitset>
using namespace std;

int x;
cout << static_cast<bitset<8>>(x) << endl;
```

# limits
## numeric_limits
"numeric_limits" class provides information about the properties of arithmetic types.

```cpp
#include<limits>
using namespace std;

int maxint = numeric_limits<int>::max();
int minint = numeric_limits<int>::min();
```

# Frequently Used Techniques
## Cumulative Sum
Cumulative sum is a method that count up how many objects satisfy a specific condition within a specific range.

### Example
#### 1D
- [AtCoder Beginner Contest 001 / D - 感雨時刻の整理](https://beta.atcoder.jp/contests/abc001/tasks/abc001_4)

#### 2D
- [AtCoder Beginner Contest 086 / D - Checker](https://beta.atcoder.jp/contests/abc086/tasks/arc089_b)
- [AtCoder Beginner Contest 018 / C - 菱形カウント](https://beta.atcoder.jp/contests/abc018/tasks/abc018_3)
- [AtCoder Beginner Contest 106 / D - AtCoder Express 2](https://beta.atcoder.jp/contests/abc106/tasks/abc106_d)

## Modulo Operation
Modulo operation finds the remainder after division of one number by another.

### Example
- [AtCoder Beginner Contest 105 / D - Candy Distribution](https://beta.atcoder.jp/contests/abc105/tasks/abc105_d)

## Dynamic Programming (DP)
Dynamic Programming is a method to simplify a complicated problem by breaking it down into simpler sub-problems in a recursive manner.

### Example
- [AtCoder Beginner Contest 104 / D - We Love ABC](https://beta.atcoder.jp/contests/abc104/tasks/abc104_d)
- [AtCoder Beginner Contest 082 / D - FT Robot](https://beta.atcoder.jp/contests/abc082/tasks/arc087_b)
- [AtCoder Beginner Contest 011 / C - 123引き算](https://beta.atcoder.jp/contests/abc011/tasks/abc011_3)

## Sieve of Eratosthenes
Sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to any given limit.

### Example
- [AtCoder Beginner Contest 084 / D - 2017-like Number](https://beta.atcoder.jp/contests/abc084/tasks/abc084_d)

## Bit Operation
### Example
- [AtCoder Beginner Contest 080 / C - Shopping Street](https://beta.atcoder.jp/contests/abc080/tasks/abc080_c)

## Binary Search
Binary Search is a search algorithm that finds the position of a target value within a sorted array.

### Example
- [AtCoder Beginner Contest 020 / C - 壁抜け](https://beta.atcoder.jp/contests/abc020/tasks/abc020_c)

## Breadth-First Search (BFS)
Breadth-First Search (BFS) is an algorithm for traversing or searching tree ot graph data structures.

### Example
- [AtCoder Beginner Contest 021 / C - 正直者の高橋くん](https://beta.atcoder.jp/contests/abc021/tasks/abc021_c)
- [AtCoder Beginner Contest 020 / C - 壁抜け](https://beta.atcoder.jp/contests/abc020/tasks/abc020_c)

## Floyd-Warshall algorithm
Floyd-Warshall algorithm is an algorithm for finding shortest paths in a weighted graph. A single execution of the algorithm will find the lengths of shortest paths between all pairs of vertices. Computational complexity is O(N^3).

### Examples
- [AtCoder Beginner Contest 079 / D - Wall](https://beta.atcoder.jp/contests/abc079/tasks/abc079_d)
- [AtCoder Beginner Contest 022 / C - Blue Bird](https://beta.atcoder.jp/contests/abc022/tasks/abc022_c)

## GCD & LCM
Greatest Common Divisor (GCD) is the largest positive integer that divides each of integers.
Least Common Multiple (LCM) of two integers is the smallest positive integer that is divisible by both integers.

```cpp
template <typename T>
T gcd(T a, T b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while(b != 0) {
    a %= b;
    if (a == 0) return b;
    b %= a;
  }
  return a;
}

template <typename T>
T lcm(T a, T b) {
  if (a == 0 && b == 0) return 0;
  return a * b / gcd(a, b);
}
```

## Radix Conversion

```cpp
#include<string>

class Radix {
private:
  const char* s;
  int a[128];
public:
  Radix(const char* s = "0123456789ABCDEF"): s(s) {
    for (int i = 0; s[i]; ++i) {
      a[(int)s[i]] = i;
    }
  }

  // Base 10 -> Base q
  std::string to(long long in, int q) {
    std::string out = "";
    while (in) {
      int r = in % q;
      out = s[r] + out;
      in = in / q;
    }
    return out;
  }

  // Base p -> Base 10
  long long to(const std::string& in, int p) {
    long long out = a[(int)in[0]];
    for (int i = 1; i < (int)in.length(); ++i) {
      out = out * p + a[(int)in[i]];
    }
    return out;
  }

  // Base p -> Base q
  std::string to(const std::string& in, int p, int q) {
    return to(to(in, p), q);
  }
};
```

