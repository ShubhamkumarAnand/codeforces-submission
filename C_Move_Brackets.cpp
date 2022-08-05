/*
   * Author :  imskanand
   ^ Time   : 05 August 2022 (21:07)
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
  int n, count = 0;
  cin >> n;
  if (n % 2 != 0) {
    dbe(0);
    return;
  }
  string str;
  cin >> str;
  for (int i = 0; i < n; i++) {
    if (str[i] == '(')
      count++;
    else if (count > 0 and str[i] == ')')
      count--;
  }
  dbe(count);
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
