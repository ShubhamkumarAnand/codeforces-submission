/*
   * Author :  imskanand
   ^ Time   : 02 August 2022 (00:35)
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
  int n,m,a,b,fair=0;
  cin >> n >> m >> a >> b;
  if(b<=m*a){
    int rem = n%m;
    fair = (n/m)*b + ((rem)==0?0:(b<rem*a?b:rem*a));
  }else{
    fair = n*a;
  }
  dbe(fair);
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
