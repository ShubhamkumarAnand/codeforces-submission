/*
   * Author :  imskanand
   ^ Time   : 31 July 2022 (01:11)
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
  int n, m;
  cin >> n >> m;
  ll initial = 1, timeNeeded = 0;
  vector<int> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i];
    if (v[i] >= initial)
      timeNeeded += (v[i] - initial);
    else
      timeNeeded += n - initial + v[i];
    initial = v[i];
  }
  dbe(timeNeeded);
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
