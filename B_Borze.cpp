#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
  char c;
  while (cin >> c) {
    if (c == '.') {
      cout << '0';
    } else {
      cin >> c;
      if (c == '.') {
        cout << '1';
      } else {
        cout << '2';
      }
    }
  }
}
