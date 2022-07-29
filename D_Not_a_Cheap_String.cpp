/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (19:54)
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

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

int stringSum(string s) {
  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    sum += (int(s[i]) - 96);
  }
  return sum;
}

void solve() {
  string str;
  cin >> str;
  int p;
  cin >> p;
  vector<char> res;
  int price = stringSum(str);
  debug(price);
  debug(p);
  if (price == p) {
    dbe(' ');
    return;
  }
  // TODO
  int i = 0;
  while (price >= 0 and i < str.size()) {
    if (price <= p) {
      break;
    }
    if ((int(str[i]) - 96) <= price) {
      res.push_back(str[i]);
      price -= (int(str[i]) - 96);
      debug(price);
    }
    i++;
  }

  for (int i = 0; i < res.size(); i++) {
    cout << res[i];
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
