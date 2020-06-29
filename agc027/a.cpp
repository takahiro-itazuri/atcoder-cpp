/*
  AtCoder Grand Contest 027
  A - Candy Distribution Again

  方針
    基本的には必要なお菓子が少ない子供から配るのが良いです。
    
    今回気をつけなければいけないのが、子供iは"ちょうどa_i個"のお菓子を
    もらうと喜ぶ点です。
    したがって、もしまだお菓子をあげていない子供がいれば、残りのお菓子を
    その子供にあげればよいですが、全員にお菓子をあげてしまっていた場合は
    、その中の一人に余分にお菓子をあげることになるので、喜ぶ子供の人数は
    １人減ります。

  実装
    上記の方針通りに実装すればよい。
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, x;
vector<int> a;

int main() {
  scanf("%d%d", &N, &x);
  a = vector<int>(N);
  for (int i = 0; i < N; ++i) scanf("%d", &a[i]);

  sort(a.begin(), a.end());

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (x < a[i]) break;
    x -= a[i];
    cnt += 1;
  }

  if (x > 0 && cnt == N) cnt -= 1;

  printf("%d\n", cnt);
  return 0;
}
