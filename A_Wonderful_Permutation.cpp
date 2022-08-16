/*
   * Author :  imskanand
   ^ Time   : 15 August 2022 (22:47)
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
  int n, k, ans = 0;
  cin >> n >> k;
  v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    --v[i];
  }
  for (int i = 0; i < k; i++) {
    if (v[i] >= k)
      ans += 1;
  }
  dbe(ans);
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
