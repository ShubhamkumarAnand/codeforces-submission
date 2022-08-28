/*
   * Author :  imskanand
   ^ Time   : 28 August 2022 (13:21)
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
  string s, r;
  cin >> s >> r;
  map<char, int> mp;
  for (auto i : s) {
    mp[i]++;
  }
  for (auto i : r) {
    mp[i]++;
  }
  if (mp.size() == 1) {
    dbe(0);
  } else if (mp.size() == 2) {
    dbe(1);
  } else if (mp.size() == 3) {
    dbe(2);
  } else if (mp.size() == 4) {
    dbe(3);
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
