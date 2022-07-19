#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int main() {
  int t;
  cin >> t;
  int sumX = 0;
  int sumY = 0;
  int sumZ = 0;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;

    sumX += x;
    sumY += y;
    sumZ += z;
  }
  if ((sumX == 0) && (sumY == 0) && (sumZ == 0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
