/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (21:48)
*/

#include <vector>
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
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }
  sort(v);
  if ((v[0] * v[0] + v[1] * v[1]) == v[2] * v[2]) {
    dbe("Yes");
  } else {
    dbe("No");
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
