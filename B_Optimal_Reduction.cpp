/*
   * Author :  imskanand
   ^ Time   : 06 August 2022 (20:46)
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
#define original_array(x) vector<int> original_array(x)
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x));
#define desc(x) sort(all(x), greater<int>{});
#define dbe(x) cout << x << endl;
#define dbz(x) cout << x << " ";

void solve() {
  int n;
  cin >> n;
  original_array(n);
  for (int i = 0; i < n; i++) {
    cin >> original_array[i];
  }
  vector<int> comp_arr;
  comp_arr = original_array;
  sort(comp_arr);
  int index = 0, left = 0, right = n - 1;
  // Checking if the array is sorted or not.
  while (left <= right) {
    if (original_array[left] == comp_arr[index]) {
      left++;
    } else if (original_array[right] == comp_arr[index]) {
      right--;
    } else {
      dbe("NO");
      return;
    }
    index++;
  }
  dbe("YES");
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
