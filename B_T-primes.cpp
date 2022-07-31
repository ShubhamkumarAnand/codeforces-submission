/*
   * Author :  imskanand
   ^ Time   : 01 August 2022 (01:27)
*/

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

#define ll long long
#define v(x) vector<int> v(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

bool isTPrime(ll n) {
  ll count = 2;
  if (n == 2) {
    return false;
  }
  for (ll i = 2; i <= (n / 2) + 1; i++) {
    if (count > 3) {
      return false;
    }
    if (n % i == 0) {
      count++;
    }
    debug(count);
  }
  return (count == 3);
}
set<int> s;
void solve() {
  ll n;
  cin >> n;
  v(n);
  // TODO
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++)
    // Checking if the number is already present in the set or not.
    dbe(((s.find(v[i]) != s.end()) ? "YES" : "NO"));
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
