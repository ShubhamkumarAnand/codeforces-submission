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

int main() {
  FASTIO
  PRECISION
  int n, m, count = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0) {
      count++;
    }
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0) {
        cout << "#";
      } else if (i % 2 == 1 and count % 2 == 1) {
        if (j == m - 1) {
          cout << "#";
        } else {
          cout << ".";
        }
      } else if (i % 2 == 1 and count % 2 == 0) {
        if (j == 0) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
    }
    cout << endl;
  }
}
