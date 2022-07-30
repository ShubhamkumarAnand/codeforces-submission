/*
   * Author :  imskanand
   ^ Time   : 28 July 2022 (18:28)
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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v);
  if (n % 2 == 1) {
    dbe("NO");
    return;
  }
  // Checking if the first half of the array is equal to the second half of the
  // array.
  for (int i = 0; i < n / 2; i++) {
    if (v[i] == v[i + n / 2]) {
      dbe("NO");
      return;
    }
    if (i + 1 < n / 2 && v[i + 1] == v[i + n / 2]) {
      dbe("NO");
      return;
    }
  }
  dbe("YES");
  for (int i = 0; i < n / 2; i++) {
    cout << v[i] << " " << v[i + n / 2] << " \n"[i == n / 2 - 1];
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
