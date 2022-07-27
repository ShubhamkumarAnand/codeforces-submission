#include <bits/stdc++.h>
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
  int a, b, c;
  cin >> a >> b >> c;
  int maxValue = 0;
  maxValue = max(maxValue, a * b * c);
  maxValue = max(maxValue, a * (b + c));
  maxValue = max(maxValue, (a + b) * c);
  maxValue = max(maxValue, a + b + c);
  maxValue = max(maxValue, a + (b * c));
  maxValue = max(maxValue, (a * b) + c);
  cout << maxValue << endl;
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
