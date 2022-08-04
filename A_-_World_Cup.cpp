/*
   * Author :  imskanand
   ^ Time   : 04 August 2022 (22:19)
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
  int y;
  cin >> y;
  if (y % 4 == 2) {
    dbe(y);
  } else if (y % 4 == 1) {
    dbe(y + 1);
  } else if (y % 4 == 3) {
    dbe(y + 3);
  } else if (y % 4 == 0) {
    dbe(y + 2);
  }
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
