#include <bits/stdc++.h>
#include <vector>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void solve() {
  // TODO : Implement the solution
  int n;
  cin >> n;
  vector<int> v(2 * n);
  int sum = 0;
  for (int i = 0; i < 2 * n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  debug(sum);
  if (sum % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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
/*
 ! stuff you should look for
 * int overflow, array bounds
 * bitwise and boolean operations
 * special cases (n=1?)
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
