#include <bits/stdc++.h>
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

void solve() {
  int a, b, n;
  cin >> a >> b;
  n = a + b;
  string s;
  cin >> s;
  forn(i, n) if (s[i] == '?') s[i] = s[n - i - 1];
  a -= count(s.begin(), s.end(), '0');
  b -= count(s.begin(), s.end(), '1');
  for (int i = 0; i <= n / 2; i++) {
    if (i != (n - i - 1) && s[i] == '?') {
      if (a > 1)
        s[i] = s[n - i - 1] = '0', a -= 2;
      else if (b > 1)
        s[i] = s[n - i - 1] = '1', b -= 2;
    } else if (s[i] == '?') {
      if (a)
        s[i] = '0', a--;
      else
        s[i] = '1', b--;
    }
  }
  string v = s;
  reverse(v.begin(), v.end());
  if (v == s && a == 0 && b == 0) {
    dbx(s);
  } else {
    dbx(-1);
  }
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
