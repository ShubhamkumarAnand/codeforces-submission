/*
   * Author :  imskanand
   ^ Time   : 29 August 2022 (19:28)
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
#define a(x) vector<int> v(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n, k, a[1001];
  cin >> n >> k;
  for (int i = 1; i <= n; ++i)
    cin >> a[i];
  if (k * 2 < n) {
    dbe("NO");
    return;
  }
  map<int, int> q;
  for (int i = 1; i <= n; ++i) {
    q[a[i]]++;
    if (q[a[i]] == 3) {
      dbe("NO");
      return;
    }
  }
  dbe("YES");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
#ifndef ONLINE_JUDGE
  freopen("second_hands_input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
