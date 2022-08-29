/*
   * Author :  imskanand
   ^ Time   : 29 August 2022 (19:44)
*/

#include <cstdio>
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
  int n, m;
  char a[101][101];
  cin >> n >> m;
  bool flag2 = false;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j) {
      cin >> a[i][j];
      if (a[i][j] == '^')
        flag2 = true;
    }
  if (n == 1 || m == 1) {
    if (flag2) {
      puts("Impossible");
      return;
    } else {
      puts("Possible");
      for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j)
          cout << a[i][j];
        cout << endl;
      }
      return;
    }
  }
  puts("Possible");
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j)
      putchar('^');
    putchar('\n');
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  //   freopen("second_hands_input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
