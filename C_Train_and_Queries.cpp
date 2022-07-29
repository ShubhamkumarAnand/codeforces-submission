/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (14:02)
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

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<pair<int, int>> vp;
  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    vp.push_back(make_pair(a, b));
  }
  // TODO
  for (int i = 0; i < k; i++) {
    int start = vp[i].first, end = vp[i].second;
    int j = 0;
    while (j < n) {
      if (v[j] == start) {
        for (int l = j + 1; l <= n; l++) {
          if (v[l] == end) {
            dbe("YES");
            break;
          } else if (l == n - 1) {
            dbe("NO");
            break;
          }
        }
        break;
      } else if (j == n - 1) {
        dbe("NO");
        break;
      }
      j++;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
