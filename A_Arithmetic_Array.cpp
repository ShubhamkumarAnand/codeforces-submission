
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void solve() {
  double n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  double sum = accumulate(v.begin(), v.end(), 0);
  double mean = sum / n;
  if (mean == 1) {
    cout << 0 << endl;
  } else if (mean > 1) {
    cout << abs(sum - n) << endl;
  } else if (mean < 1) {
    cout << 1 << endl;
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
