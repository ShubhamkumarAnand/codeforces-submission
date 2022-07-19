#include <bits/stdc++.h>
using namespace std;

void printUnique(long long int l, long long int r) {
  for (long long int i = l; i <= r; i++) {
    string s = to_string(i);
    set<int> uniDigits(s.begin(), s.end());

    if (s.size() == uniDigits.size()) {
      cout << i;
      break;
    }
  }
}

// Driver Code
int main() {
  int year;
  cin >> year;
  long long int l = year + 1, r = 90000;

  printUnique(l, r);
  return 0;
}
