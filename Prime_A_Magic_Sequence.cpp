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
  vector<vector<int>> v(n, vector<int>(10));
  int primeCount = (isPrime(n) ? 1 : 0), numOfElements = 1;
  bool flag = false;
  v[0][0] = n;

  // Taking the input Array with the given operations
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == 0 and i == 0) {
        continue;
      }
      int num = 0;
      if (j < 1 and i > 0) {
        num = v[i - 1][9];
        v[i][j] = ((num % 2 == 0) ? (num / 2) : ((num * 3) + 1));
        cout << v[i][j] << " ";
        numOfElements++;
        if (isPrime(v[i][j])) {
          primeCount++;
        }
        continue;
      }
      num = v[i][j - 1];
      v[i][j] = ((num % 2 == 0) ? (num / 2) : ((num * 3) + 1));
      cout << v[i][j] << " ";
      numOfElements++;
      if (v[i][j] < 2) {
        flag = true;
        break;
      }
      if (isPrime(v[i][j])) {
        primeCount++;
      }
    }
    cout << endl;
    if (flag) {
      break;
    }
  }
  dbe(numOfElements);
  dbe(primeCount);
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
