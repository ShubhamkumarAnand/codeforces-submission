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

int getMaxVolume(const vector<int> &v, int n) {
  int maxArea = -1;
  int i = 0, j = n - 1;
  while (i < j) {
    int currentArea = (j - i) * (min(v[i], v[j]));
    maxArea = max(maxArea, currentArea);
    if (v[i] <= v[j]) {
      ++i;
    } else {
      --j;
    }
  }
  return maxArea;
}

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << getMaxVolume(v, n) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
