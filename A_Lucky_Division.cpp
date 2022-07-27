#include <bits/stdc++.h>
#include <iostream>
#include <type_traits>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define sort(x) sort(x.begin(), x.end());
#define desc(x) sort(x.begin(), x.end(), greater<int>{});

void solve() {
  int n;
  cin >> n;
  cout << ((n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 ||
            n % 477 == 0)
               ? "YES"
               : "NO")
       << endl;
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
