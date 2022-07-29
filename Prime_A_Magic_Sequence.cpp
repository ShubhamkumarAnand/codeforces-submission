/*
   * Author :  imskanand
   ^ Time   : 29 July 2022 (21:05)
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

int powerMod(int a, int b, int m) {
  if (b == 0)
    return 1;
  int k = powerMod(a, b / 2, m);
  k = k * k;
  k %= m;
  if (b & 1)
    k = (k * a) % m;
  return k;
}

bool isPrime(int n, int iter = 5) {
  if (n < 4)
    return n == 2 || n == 3;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 0; i < iter; i++) {
    int a = 2 + rand() % (n - 3);
    if (powerMod(a, n - 1, n) != 1)
      return false;
  }
  return true;
}

void solve() {
  // ^ https://www.codechef.com/IEMC2022/problems/IEMCO10_P1V1
  int n;
  cin >> n;
  cout << n << " ";
  int v[1000][1000];
  int primeCount = 0, j;
  bool flag = false;
  // TODO
  for (int i = 0; i < n; i++) {
    for (j = 1; j < 10; j++) {
      v[0][0] = n;
      if (v[i][j - 1] % 2 == 0) {
        v[i][j] = v[i][j - 1] / 2;
      } else {
        v[i][j] = v[i][j - 1] * 3 + 1;
      }
      if (isPrime(v[i][j])) {
        primeCount++;
      }
      if (v[i][j] < 2) {
        flag = true;
        break;
      }
      cout << v[i][j] << " ";
    }
    if (flag) {
      break;
    }
    cout << endl;
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
