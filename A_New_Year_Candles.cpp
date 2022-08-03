/*
   * Author :  imskanand
   ^ Time   : 02 August 2022 (23:29)
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

int mold(int a, int b) {
  int extraTime = 0;
  while (a >= b) {
    extraTime += a / b;
    a = (a / b) + (a % b);
  }
  return extraTime;
}

void solve() {
  int a, b;
  cin >> a >> b;
  int time = a + mold(a, b);
  dbe(time);
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
