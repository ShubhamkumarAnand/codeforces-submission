/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (12:26)
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
// #define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n;
  cin >> n;
  int minSum = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int value = n - (n % 3), i = 0;
  while (i < value) {
    sort(v.begin() + i, v.begin() + i + 3, greater<int>{});
    i += 3;
  }
  int passIndex = 2;

  for (int i = 0; i < n; i++) {
    if (i == passIndex) {
      passIndex += 3;
      continue;
    }
    minSum += v[i];
  }
  dbe(minSum);
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
