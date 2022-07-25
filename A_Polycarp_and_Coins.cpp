#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void solve() {
  int n;
  cin >> n;
  int c1 = n / 3;
  int c2 = n / 3;
  int remain = n - (n / 3 + 2 * (n / 3));
  if (remain == 1) {
    cout << c1 + 1 << " " << c2 << endl;
  } else if (remain == 2) {
    cout << c1 << " " << c2 + 1 << endl;
  } else {
    cout << c1 << " " << c2 << endl;
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
