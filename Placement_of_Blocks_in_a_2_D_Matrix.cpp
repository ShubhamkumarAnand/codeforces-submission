/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (21:29)
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

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  // ^ https://www.codechef.com/IEMC2022/problems/IEMCO10_P3V1
  int n, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      if (a == 1) {
        if (i % 2 != 1 || j % 2 != 1) {
          count++;
        }
      }
    }
  }
  if (count == 0) {
    dbe("Proper Placement");
  } else {
    dbe("Improper Placement");
    dbe(count);
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
