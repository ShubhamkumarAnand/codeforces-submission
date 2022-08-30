/*
   * Author :  imskanand
   ^ Time   : 30 August 2022 (22:39)
*/

#include <cctype>
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
  string str;
  cin >> str;
  if (n != 5) {
    dbe("NO");
    return;
  }
  for (int i = 0; i < n; i++) {
    if (str[i] == 't' or str[i] == 'M' or str[i] == 'I' or str[i] == 'U' or
        str[i] == 'R') {
      dbe("NO");
      return;
    }
  }
  // 123rd is the wrong answer
  // TODO
  dbe("YES");
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
