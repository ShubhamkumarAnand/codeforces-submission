/*
   * Author :  imskanand
   ^ Time   : 01 September 2022 (23:10)
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
  vector<string> v1(n), v2(n), v3(n);
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> v1[i];
    mp[v1[i]]++;
  }
  for (int i = 0; i < n; i++) {
    cin >> v2[i];
    mp[v2[i]]++;
  }
  for (int i = 0; i < n; i++) {
    cin >> v3[i];
    mp[v3[i]]++;
  }
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++) {
    if (mp[v1[i]] == 1) {
      a += 3;
    } else if (mp[v1[i]] == 2) {
      a++;
    }
    if (mp[v2[i]] == 1) {
      b += 3;
    } else if (mp[v2[i]] == 2) {
      b++;
    }
    if (mp[v3[i]] == 1) {
      c += 3;
    } else if (mp[v3[i]] == 2) {
      c++;
    }
  }
  cout << a << " " << b << " " << c << endl;
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
