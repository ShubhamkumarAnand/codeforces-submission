/*
   * Author :  imskanand
   ^ Time   : 21 August 2022 (23:49)
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
// #define a(x) vector<int> v(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

constexpr int inf = std::numeric_limits<int>::max();

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // TODO
  vector dp(3, vector<int>(16, -inf));
  dp[0][0] = dp[1][0] = 0;
  for (int i = 0; i < n; i++) {
    vector g(3, vector<int>(16, -inf));
    for (int j = 0; j <= 2; j++) {
      for (int s = 0; s < 16; s++) {
        if (dp[j][s] == -inf) {
          continue;
        }
        for (int t = 0; t < 4; t++) {
          int f = t << (j % 2 * 2);
          if (s & f) {
            continue;
          }
          int ns = s | f;
          int val = (t & 1) * a[i] - (t >> 1 & 1) * a[i];
          g[j][ns] = max(g[j][ns], dp[j][s] + val);
          if (j < 2) {
            g[j + 1][ns] = max(g[j + 1][ns], dp[j][s] + val);
          }
        }
      }
    }
    dp = g;
  }
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
