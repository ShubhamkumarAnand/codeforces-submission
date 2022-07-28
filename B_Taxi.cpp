/*
   * Author :  imskanand
   ^ Time   : 28 - July - 22
*/
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n, count = 0;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int n;
    cin >> n;
    if (n == 4) {
      count++;
    } else {
      mp[n]++;
    }
  }
  int threeCount = mp[3], oneCount = mp[1], twoCount = mp[2];
  int twoChap =
      (twoCount % 2 == 0 ? twoCount / 2 : twoCount / 2 + twoCount % 2);
  if (threeCount >= oneCount) {
    count += (threeCount + twoChap);
  } else if (threeCount < oneCount) {
    count += threeCount;
    int remSum = (oneCount - threeCount + twoCount * 2);
    count += remSum / 4 + (remSum % 4 != 0 ? 1 : 0);
  }
  dbe(count);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
