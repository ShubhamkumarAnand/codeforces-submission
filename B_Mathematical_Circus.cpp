/*
   * Author :  imskanand
   ^ Time   : 16 August 2022 (20:23)
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
  int n, k;
  cin >> n >> k;
  if ((n % 2 != 0) || (k < 1 && n < 4) || (k % 4 == 0)) {
    dbe("NO");
    return;
  }
  dbe("YES");
  for (int i = 1; i <= n; i += 2) {
    int a = i, b = i + 1;
    if ((((a + k) * b) % 4 == 0) || (b % 4 == 0)) {
      cout << a << " " << b << endl;
    } else {
      cout << b << " " << a << endl;
    }
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
