/*
   * Author :  imskanand
   ^ Time   : 06 August 2022 (21:09)
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define int long long
#define v vector<int>
#define all(X) (X).begin(), (X).end()

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc = 1;
  cin >> tc;
  v sq;
  for (int i = 0; i <= 2e5; i++) {
    sq.push_back(i * i);
  }

  while (tc--) {
    int n;
    cin >> n;
    v actual(n), res(n);
    for (int i = 0; i < n; i++) {
      actual[i] = i;
    }
    res = actual;
    int idx = n - 1;
    while (idx >= 0) {
      int curr_num = actual[idx];
      int actual_num = *lower_bound(all(sq), actual[idx]);
      int dist = actual_num - curr_num;
      reverse(res.begin() + dist, res.begin() + curr_num + 1);
      idx = dist - 1;
    }

    for (int i = 0; i < n; i++) {
      int sq = res[i] + i;
      if (ceil((double)sqrt(sq)) == floor((double)sqrt(sq))) {
        cout << res[i] << ' ';
      } else {
        cout << -1;
        return 0;
      }
    }
    cout << '\n';
  }

  return 0;
}
