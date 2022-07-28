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
  // TODO
  sort(v);
  double maxDist = 0;
  for (int i = 1; i < n; i++) {
    maxDist = max(maxDist, v[i] - v[i - 1]);
    debug(maxDist);
  }
  double minLightDist = maxDist / 2;
  for (int i = 0; i < n; i++) {
    double left, right;
    if (v[i] == 0) {
      left = 0;
      right = v[i + 1] - v[i];
    } else if (i == 0) {
      left = v[i] - 0;
      right = v[i + 1] - v[i];
    } else if (v[i] == l) {
      right = 0;
      left = v[i] - v[i - 1];
    } else if (i == n - 1) {
      left = v[i] - v[i - 1];
      right = n - v[i];
    } else {
      left = v[i] - v[i - 1];
      right = v[i + 1] - v[i];
    }
    minLightDist = max(minLightDist, right);
    minLightDist = max(minLightDist, left);
    debug(minLightDist);
  }
  dbe(minLightDist);
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
