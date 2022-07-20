#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
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
  string s;
  cin >> s;
  vector<int> v;
  int n = s.size();

  // if the string contains bear then return the index of the first character
  // and store it in the vector.
  for (int i = 0; i < n; i++) {
    if (s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r') {
      v.push_back(i);
    }
  }
  int firstOccurrence = 0;
  int sum = 0;
  for (auto x : v) {
    sum += (x + 1) * (n - 3 - x) - firstOccurrence * (n - 3 - x);
    firstOccurrence = x + 1;
  }

  dbx(sum);
}
