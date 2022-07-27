#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
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
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  int len = str.size();
  // TODO
  vector<char> ch;
  for (int i = 0; i < len; i++) {
    if (str[i] == 'a' or str[i] == 'o' or str[i] == 'y' or str[i] == 'e' or
        str[i] == 'u' or str[i] == 'i') {
      continue;
    } else {
      ch.push_back('.');
      ch.push_back(str[i]);
    }
  }
  for (int i = 0; i < ch.size(); i++) {
    cout << ch[i];
  }
  cout << endl;
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
