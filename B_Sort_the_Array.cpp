/*
   * Author :  imskanand
   ^ Time   : 08 August 2022 (23:03)
*/

#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define ll long long
#define v(x) vector<int> v(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solved() {
  {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++) {
      scanf("%d", a + i);
      b[i] = a[i];
    }
    std::sort(a, a + n);
    int marker = 0, r = -1, l = 0;
    for (i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        if (r == -1)
          r = i;
        l = i;
      }
    }
    int j;
    if (r == -1)
      r = 0;
    for (i = r, j = l; i <= l; i++, j--)
      if (a[i] != b[j]) {
        printf("%s", "no");
        return 0;
      }
    printf("%s\n%d %d", "yes", r + 1, l + 1);
    return 0;
  }
}

void solve() {
  int n;
  cin >> n;
  v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> s(n);
  s = v;
  sort(s);
  int count = 0;
  vector<int> a;
  debug(v);
  debug(s);
  for (int i = 0; i < n; i++) {
    if (count > 2) {
      dbe("no");
      return;
    }
    if (s[i] != v[i]) {
      count++;
      a.push_back(s[i]);
    }
  }
  debug(count);
  dbe("yes");
  cout << a[0] << " " << a[1] << endl;
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
