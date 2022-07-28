/*
   * Author :  imskanand
   ^ Time   : 28 July 2022 (18:28)
*/
#include <iostream>
#include <vector>
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  // TODO
  sort(v);
  int i = 1, j = i + 1;
  while (j < n) {
    if (v[i] < v[j]) {
      swap(v[i], v[j]);
      i += 2;
      j = i + 1;
    } else {
      j++;
    }
  }

  bool flag = false;
  for (int i = 1; i < n - 1; i++) {
    if (v[i] == v[i + 1] or v[i] == v[i - 1]) {
      flag = false;
      dbe("NO");
      return;
    }
    if (v[i - 1]<v[i]> v[i + 1]) {
      flag = true;
    } else if (v[i - 1] > v[i] < v[i + 1]) {
      flag = true;
    }
  }

  if (v[0] == v[n - 1]) {
    dbe("NO");
    return;
  } else if (v[1]<v[0]> v[n - 1]) {
    flag = true;
  } else if (v[1] > v[0] < v[n - 1]) {
    flag = true;
  } else {
    flag = false;
    dbe("NO");
    return;
  }
  if (flag) {
    dbe("YES");
    for (int i = 0; i < n; i++) {
      dbz(v[i]);
    }
  }
  cout << endl;
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
