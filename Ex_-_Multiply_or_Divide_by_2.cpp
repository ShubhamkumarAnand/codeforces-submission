/*
 ! stuff you should look for
 * int overflow, array bounds
 * bitwise and boolean operations
 * special cases (n=1?)
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */

#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
  // * https://atcoder.jp/contests/abc254/tasks/abc254_h
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  // TODO : Implement the algorithm solution
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
