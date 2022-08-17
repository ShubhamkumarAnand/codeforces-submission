/*
   * Author :  imskanand
   ^ Time   : 12 August 2022 (20:47)
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
  int n, H, M;
  cin >> n >> H >> M;
  const int curr = H * 60 + M;
  int res = 1440;
  /* Taking input of the time of the sleep and then calculating the time difference between the current
  time and the sleep time. */
  for (int i = 0; i < n; i++) {
    int h, m;
    cin >> h >> m;
    const int x = h * 60 + m;
    const int ans = (x - curr + 1440) % 1440;
    res = min(res, ans);
  }
  cout << res / 60 << " " << res % 60 << endl;
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