/*
   * Author :  imskanand
   ^ Time   : 17 August 2022 (23:02)
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
  int n;
  cin >> n;
  v(n);
  if (n % 2 == 1) {
    cout << 1 << " \n"[n == 1];
  }
  /* Printing the numbers in the following way: */
  for (int i = n % 2 + 1; i <= n; i += 2) {
    cout << i + 1 << " " << i << " \n"[i == n - 1];
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
