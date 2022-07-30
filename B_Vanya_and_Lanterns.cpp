/*
   * Author :  imskanand
   ^ Time   : 28 July 2022 (13:44)
*/
#include <iostream>
#include <vector>
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
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
#define PRECISION std::cout << std::fixed << std::setprecision(10);

void solve() {
  int n, l;
  cin >> n >> l;
  vector<double> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v);
  // Finding the maximum distance between the first point and the start of the
  // road.
  double maxDist = v[0] * 2;
  // Finding the maximum distance between two consecutive points.
  for (int i = 0; i < n - 1; i++) {
    maxDist = max(maxDist, v[i + 1] - v[i]);
  }
  // Finding the maximum distance between the last point and the end of the
  // road.
  maxDist = max(maxDist, 2 * (l - v[n - 1]));
  dbe(maxDist * 0.5);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  PRECISION

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
