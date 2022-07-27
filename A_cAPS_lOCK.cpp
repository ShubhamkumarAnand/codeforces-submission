#include <algorithm>
#include <cctype>
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
#define dbx(x) cout << x << " ";

void solve() {
  string str;
  cin >> str;
  for (int i = 1; i < str.size(); ++i) {
    if (islower(str[i])) {
      dbe(str);
      return;
    }
  }
  if (isupper(str[0])) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    dbe(str);
  } else {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    str[0] = toupper(str[0]);
    dbe(str);
  }
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
