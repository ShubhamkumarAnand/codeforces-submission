#include <bits/stdc++.h>
#include <vector>
using namespace std;
using i64 = long long;

void solve() {
  // * https://www.codechef.com/START33B/problems/ARRAY_OPS
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  while (n > 1) {
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      v[i] = v[i + 1] - v[i];
    }
    n--;
  }
  cout << v[0] << endl;
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
