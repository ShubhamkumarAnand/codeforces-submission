/*
   * Author :  imskanand
   ^ Time   : 07 August 2022 (20:35)
*/

#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define ll long long
#define v(x) vector<int> v(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n;
  cin >> n;
  string res;
  if ((n < 7 && n != 4) || n == 9 || n == 10 || n == 13) {
    dbe(-1);
    return;
  }
  while (n % 7 > 0) {
    res += '0' + 4;
    n -= 4;
  }
  while (n > 0) {
    res += '0' + 7;
    n -= 7;
  }
  dbe(res);
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
