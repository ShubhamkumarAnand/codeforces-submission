/*
   * Author :  imskanand
   ^ Time   : 06 September 2022 (23:33)
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
  int x, mx1 = -1, mx2 = -1, mn1 = -1, mn2 = -1;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (mx1 == -1 || x > mx1) {
      mx2 = mx1;
      mx1 = x;
    } else if (mx2 == -1 || x > mx2) {
      mx2 = x;
    }
    if (mn1 == -1 || x < mn1) {
      mn2 = mn1;
      mn1 = x;
    } else if (mn2 == -1 || x < mn2) {
      mn2 = x;
    }
  }
  dbe(mx1 + mx2 - mn1 - mn2);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
