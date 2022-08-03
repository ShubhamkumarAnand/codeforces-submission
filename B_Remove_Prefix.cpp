/*
   * Author :  imskanand
   ^ Time   : 03 August 2022 (12:52)
*/

#include <iostream>
#include <map>
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
  map<int, int> mp;
  int count = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (mp[v[i]] > 0)
      break;
    else {
      mp[v[i]]++;
      count++;
    }
  }
  dbe(n - count);
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
