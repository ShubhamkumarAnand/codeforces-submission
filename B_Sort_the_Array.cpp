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

int n, k, i, a[100001], b[100001], p1, p2;
int main() {
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }

  sort(b, b + n);
  for (i = 0; i < n; i++) {
    if (b[i] != a[i]) {
      p2 = i;
      k++;
      if (k == 1)
        p1 = i;
    }
  }
  reverse(a + p1, a + 1 + p2);
  for (i = 0; i < n; i++) {
    if (b[i] != a[i]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes" << endl << p1 + 1 << " " << p2 + 1;
}
