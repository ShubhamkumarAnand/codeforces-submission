/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (11:57)
*/

#include <iostream>
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

bool happyNumber(int n) {
  int i = 0, j = log10(n) + 4;
  while (i < j) {
    if (n == 1) {
      return true;
    }
    int sum = 0;
    while (n > 0) {
      int rem = n % 10;
      sum += rem * rem;
      n /= 10;
    }
    n = sum;
    i++;
  }
  return false;
}

void solve() {
  int n;
  cin >> n;
  bool isHappyNumber = happyNumber(n);
  cout << (isHappyNumber ? "true" : "false") << endl;
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
