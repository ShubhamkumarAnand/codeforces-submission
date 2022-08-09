/*
   * Author :  imskanand
   ^ Time   : 09 August 2022 (23:57)
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
int m, s, i, j, k;
void solve() {
  cin >> m >> s;
  if (s > m * 9 || s < 1 && m > 1)
    cout << "-1"
         << " "
         << "-1";
  else {
    for (i = m - 1, k = s; i >= 0; i--) {
      j = max(0, k - 9 * i);
      if (j == 0 && i == m - 1 && k)
        j = 1;
      cout << j;
      k -= j;
    }
    cout << " ";
    for (i = m - 1, k = s; i >= 0; i--) {
      j = min(9, k);
      cout << j;
      k -= j;
    }
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
