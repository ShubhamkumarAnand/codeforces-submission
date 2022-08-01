/*
   * Author :  imskanand
   ^ Time   : 01 August 2022 (20:33)
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
int n,H,M;
cin >> n >> H >> M;
int initial = 60*H + M;
// TODO
int sleepTimeHour= 0,sleepTimeMin = 0,fin=0;
for(int i = 0; i < n; i++) {
  int a,b;
  cin >> a >> b;
  debug(H)debug(M);
  debug(a)debug(b);
  fin = 60*(a) + (b);
  sleepTimeHour = (a-H)>=0?(a-H):(24-H)+a;
  if(b-M>=0){
    sleepTimeMin = (b-M);
  }else{
    sleepTimeMin = b+ (60-M);
    sleepTimeHour--;
  }
  debug(sleepTimeHour);
  debug(sleepTimeMin);
  H=a;
  M=b;
  }
  if(fin==initial){
    dbe(0);
    return;
  }
cout << sleepTimeHour << " " << sleepTimeMin <<endl;
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
