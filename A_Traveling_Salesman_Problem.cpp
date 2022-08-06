/*
   * Author :  imskanand
   ^ Time   : 06 August 2022 (20:31)
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
  int xc_max, xc_min, yc_max, yc_min;
  xc_max = yc_max = 0;
  xc_min = yc_min = 0;
  int n;
  cin >> n;
  vector<pair<int, int>> vp(n);
  for (int i = 0; i < n; i++) {
    cin >> vp[i].first >> vp[i].second;
    xc_max = max(xc_max, vp[i].first), xc_min = min(xc_min, vp[i].first);
    yc_max = max(yc_max, vp[i].second), yc_min = min(yc_min, vp[i].second);
  }
  int result = 2 * (xc_max - xc_min + yc_max - yc_min);
  dbe(result);
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
