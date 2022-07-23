#include <bits/stdc++.h>
#include <functional>
#include <iostream>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

const int INF = (1 << 30) - 1;
const ll LINF = 1e18;
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ld eps = 1e-6;

#define FASTIO                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define PRECISION std::cout << std::fixed << std::setprecision(20);
#define DBPRECISION std::cout << std::fixed << std::setprecision(4);
#define dbx(x) cout << x << endl;

int main() {
  FASTIO
  PRECISION
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<int>{});
  int maxMoney = v[0];
  int totalMoney = 0;
  for (int i = 1; i < n; i++) {
    totalMoney += (maxMoney - v[i]);
  }
  cout << totalMoney << endl;
}
