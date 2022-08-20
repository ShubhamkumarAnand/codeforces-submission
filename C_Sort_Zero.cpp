/*
   * Author :  imskanand
   ^ Time   : 17 August 2022 (23:10)
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
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> pos(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    pos[a[i]].push_back(i);
  }

  int bad = 0, ans = 0;
  for (int i = 0; i < n - 1; i++) {
    bad += a[i] > a[i + 1];
  }

  for (int i = 0; i < n && bad > 0; i++) {
    if (a[i] > 0) {
      ans++;
      for (auto j : pos[a[i]]) {
        if (j < n - 1) {
          bad -= a[j] > a[j + 1];
        }
        if (j > 0) {
          bad -= a[j - 1] > a[j];
        }
        a[j] = 0;
        if (j < n - 1) {
          bad += a[j] > a[j + 1];
        }
        if (j > 0) {
          bad += a[j - 1] > a[j];
        }
      }
    }
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
