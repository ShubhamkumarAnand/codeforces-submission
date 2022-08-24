/*
   * Author :  imskanand
   ^ Time   : 24 August 2022 (23:05)
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
  int n, su = 0;
  cin >> n;
  v(n);
  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    su += v[i];
    sum[i] = su;
  }
  int m;
  cin >> m;
  while (m--) {
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
      if (k <= sum[i]) {
        dbe(i + 1);
        break;
      }
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
