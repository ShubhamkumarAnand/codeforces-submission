#include <bits/stdc++.h>
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
#define dbz(x) cout << x << " ";

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == 0 or b == 0 or a + b < 4) {
    dbx(0);
    return;
  }
  int maxTeamCount = (a + b) / 4;
  int count = 0;
  if (a == b) {
    dbx(maxTeamCount);
    return;
  } else if (b <= maxTeamCount) {
    dbx(b);
    return;
  } else if (a <= maxTeamCount) {
    dbx(a);
    return;
  }
  dbx(maxTeamCount);
}

int main() {
  FASTIO
  PRECISION
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
