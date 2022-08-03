/*
   * Author :  imskanand
   ^ Time   : 03 August 2022 (23:48)
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
  int n, k;
  cin >> n >> k;
  --k;
  /* `k / (n - 1) * n` is the number of times the first person has been chosen.
  `k % (n - 1)` is the number of times the second person has been chosen.
  `+ 1` is because the first person is chosen once. */
  dbe(k / (n - 1) * n + k % (n - 1) + 1)
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
