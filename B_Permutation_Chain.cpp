/*
   * Author :  imskanand
   ^ Time   : 04 August 2022 (20:32)
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
#define vi vector<int>
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
    v[i] = i + 1;
  }

  int startIdx = 1;
  vector<vector<int>> res;
  for (int i = 0; i < n; i++) {
    res.push_back(v);
    if (startIdx >= n) {
      break;
    } else {
      swap(v[startIdx], v[0]);
      startIdx++;
    }
  }
  dbe(res.size());
  for (auto &i : res) {
    for (auto &j : i) {
      dbz(j);
    }
    cout << endl;
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
