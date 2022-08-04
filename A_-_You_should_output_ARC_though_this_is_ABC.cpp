/*
   * Author :  imskanand
   ^ Time   : 04 August 2022 (23:00)
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
  int r, s;
  cin >> r >> s;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum = r + s;
  if (sum == 2) {
    dbe(a);
  } else if (sum == 3 and r == 1) {
    dbe(b);
  } else if (sum == 3 and r == 2) {
    dbe(c);
  } else {
    dbe(d);
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
