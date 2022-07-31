#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <tuple>
#include <unordered_map>
#define ll long long

using namespace std;
typedef tuple<int, int, int> tupl;

int findCheapestPrice(int cities, vector<vector<int>> &flights, int src,
                      int dst) {
  unordered_map<int, vector<pair<int, int>>> adjList;

  for (auto flight : flights) {

    adjList[flight[0]].push_back({flight[1], flight[2]});
  }

  queue<pair<int, int>> q;
  q.push({src, 0});

  int srcDist = INT_MAX;

  while (!q.empty()) {

    int qSize = q.size();

    for (int i = 0; i < qSize; i++) {
      pair<int, int> curr = q.front();
      q.pop();

      for (auto next : adjList[curr.first]) {

        if (srcDist < curr.second + next.second)
          continue;

        q.push({next.first, curr.second + next.second});

        if (dst == next.first) {
          srcDist = min(srcDist, curr.second + next.second);
        }
      }
    }
  }

  return srcDist == INT_MAX ? -1 : srcDist;
}

// Driver Code
int main() {
  int n;
  cin >> n;
  vector<ll> members(n);
  for (int i = 0; i < n; i++) {
    cin >> members[i];
  }

  int E;
  cin >> E;
  vector<vector<int>> v(E, vector<int>(3));
  for (int i = 0; i < E; i++) {
    cin >> v[i][0] >> v[i][1] >> v[i][2];
  }

  int s, d;
  cin >> s >> d;

  // Function Call
  long ans = findCheapestPrice(n, v, s, d);
  cout << ans;
  return 0;
}
