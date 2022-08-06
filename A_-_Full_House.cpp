/*
   * Author :  imskanand
   ^ Time   : 06 August 2022 (17:38)
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
  map<int, int> mp;
  for (int i = 0; i < 5; i++) {
    int num;
    cin >> num;
    mp[num]++;
  }
  if (mp.size() == 2) {
    for (auto it : mp) {
      if (it.second == 2 or it.second == 3) {
        continue;
      } else {
        dbe("No");
        return;
      }
    }
  } else {
    dbe("No");
    return;
  }
  dbe("Yes");
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
