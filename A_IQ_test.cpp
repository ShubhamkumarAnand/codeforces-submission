/*
   * Author :  imskanand
   ^ Time   : 28 July 2022 (13:06)
*/
#include <iostream>
#include <vector>
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
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
  int n;
  cin >> n;
  int evenCount = 0, oddCount = 0;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }
  if (evenCount > oddCount) {
    for (int i = 0; i < n; i++) {
      if (v[i] % 2 != 0) {
        dbe(i + 1);
        break;
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (v[i] % 2 == 0) {
        dbe(i + 1);
        break;
      }
    }
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
