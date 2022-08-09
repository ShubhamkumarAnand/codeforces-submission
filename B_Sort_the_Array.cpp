/*
   * Author :  imskanand
   ^ Time   : 08 August 2022 (23:03)
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
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> s(n);
  s = v;
  sort(s);
  // TODO
  int count = 0;
  vector<int> a;
  debug(v);
  debug(s);
  for (int i = 0; i < n; i++) {
    if (count > 2) {
      dbe("no");
      return;
    }
    if (s[i] != v[i]) {
      count++;
      a.push_back(s[i]);
    }
  }
  debug(count);
  dbe("yes");
  cout << a[0] << " " << a[1] << endl;
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
