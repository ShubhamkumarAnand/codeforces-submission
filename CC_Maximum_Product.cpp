/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (13:09)
*/

#include <iostream>
#include <iterator>
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
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int mul = v[i] * v[j];
      mp[mul]++;
    }
  }
  int count = 0, pro = 0;
  for (auto it : mp) {
    if (it.second > count) {
      count = it.second;
      pro = it.first;
    }
  }
  cout << pro << " " << count << endl;
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
