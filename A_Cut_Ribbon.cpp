/*
   * Author :  imskanand
   ^ Time   : 01 August 2022 (02:01)
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
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  int dp[n + 1];
  dp[0] = 0;
  // TODO
  /* Finding the minimum number of steps to reach the number `i` from `0` using
  the given numbers `a`, `b` and `c`. */
  for (int i = 1; i < n + 1; i++) {
    int x, y, z;
    x = y = z = -1;
    if (i >= a) {
      x = dp[i - a];
    }
    if (i >= b) {
      y = dp[i - b];
    }
    if (i >= c) {
      z = dp[i - c];
    }
    if (x == -1 and y == -1 and z == -1) {
      dp[i] = -1;
    } else {
      dp[i] = 1 + max(x, max(y, z));
    }
  }
  dbe(dp[n]);
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
