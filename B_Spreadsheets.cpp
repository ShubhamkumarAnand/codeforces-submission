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
#define dbx(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void alphaRowCol(string s) {
  string str = "R23C55";
  // TODO
  cout << str << endl;
}

void alphabetic(string s) {
  string str = "BC23";
  // TODO
  cout << str << endl;
}

void solve() {
  string s;
  cin >> s;
  if (s[0] == 'R') {
    if (isdigit(s[1])) {
      alphabetic(s);
    }
  } else {
    alphaRowCol(s);
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
