/*
   * Author :  imskanand
   ^ Time   : 30 July 2022 (23:34)
*/

#include <iostream>
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
// #define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n, s;
  cin >> s >> n;
  pair<int, int> a[n];
  bool flag = true;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    cin >> a[i].second;
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (s > a[i].first) {
      s += a[i].second;
      flag = true;
    } else {
      flag = false;
      break;
    }
  }
  dbe((flag ? "YES" : "NO"));
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
