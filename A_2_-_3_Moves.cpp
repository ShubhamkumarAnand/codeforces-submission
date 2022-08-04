/*
   * Author :  imskanand
   ^ Time   : 04 August 2022 (20:07)
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
  ll n;
  cin >> n;
  if (n == 1) {
    dbe(2);
    return;
  }
  ll rem = n / 6;
  if (n % 6 == 0) {
    dbe(2 * rem);
    return;
  } else if (n % 6 <= 2) {
    dbe(2 * (rem - 1) + 3);
    return;
  } else if (n % 6 == 3) {
    dbe(2 * rem + 1);
    return;
  } else {
    dbe(2 * rem + 2);
    return;
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
