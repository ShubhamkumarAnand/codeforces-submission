/*
   * Author :  imskanand
   ^ Time   : 16 August 2022 (21:39)
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

void solve() {
  int n, q;
  cin >> n >> q;

  deque<int> strength(n);
  map<int, int> value;
  for (int i = 0; i < n; i++) {
    cin >> strength[i];
    value[strength[i]] = i + 1;
  }

  map<int, pair<int, int>> mp;
  for (int round = 1;; round++) {
    /* Taking the first two elements of the deque and comparing them. */
    int first = strength.front();
    strength.pop_front();
    int second = strength.front();
    strength.pop_front();

    /* This is to push the smaller element at the back of the deque and the
    larger element at the front of the deque. */
    strength.push_back(min(first, second));
    strength.push_front(max(first, second));

    /* To handle the case when the last two elements are equal. */
    if (first == n || second == n) {
      mp[value[n]] = {round, INT_MAX};
      break;
    }

    /* This is to handle the case when the last two elements are equal. */
    if (mp.find(value[max(first, second)]) == mp.end()) {
      mp[value[max(first, second)]] = {round, round};
    } else {
      mp[value[max(first, second)]].second = round;
    }
  }

  for (int ii = 0; ii < q; ii++) {
    pair<int, int> p;
    cin >> p.first >> p.second;

    /* This is the part where we are taking the queries and printing the
    answers. */
    if (mp.find(p.first) == mp.end()) {
      dbe(0);
    } else {
      auto [first, second] = mp[p.first];
      if (first <= p.second) {
        dbe((min(p.second, second) - first + 1));
      } else {
        dbe(0);
      }
    }
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
}
