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
  string str;
  cin >> str;
  string res = "hello";
  int j = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == res[j]) {
      j++;
    }
  }
  if (res[j] == '\0') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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
