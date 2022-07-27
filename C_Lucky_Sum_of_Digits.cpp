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

int digitSum(int n) {
  int sum = 0;
  while (n > 0) {
    int rem = n % 10;
    sum += rem;
    n /= 10;
  }
  return sum;
}

bool magicNumber(int n) {
  while (n > 0) {
    int rem = n % 10;
    if (rem != 4 or rem != 7) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  FASTIO
  PRECISION
  int n;
  cin >> n;
  vector<int> v;
  while (n > 0) {
    if (n < 4) {
      dbx(-1);
      return 0;
    } else {
      // TODO : Implement the solution for Lucky sum of Digits
    }
  }
}
