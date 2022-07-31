/*
   * Author :  imskanand
   ^ Time   : 31 July 2022 (18:21)
*/

#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void dfs(int s, vector<vector<int>> g, vector<int> &v) {
  for (auto i : g[s]) {
    if (!v[i]) {
      v[i] = 1;
      dfs(i, g, v);
    }
  }
  debug(v);
}
void deleteEdges(int n, int m, int a, int b, vector<vector<int>> edges) {
  vector<vector<int>> g(n, vector<int>());
  for (int i = 0; i < m; i++) {
    g[edges[i][0] - 1].push_back(edges[i][1] - 1);
    g[edges[i][1] - 1].push_back(edges[i][0] - 1);
    debug(g);
  }
  vector<int> v(n, 0);
  v[a - 1] = 1;
  dfs(a - 1, g, v);
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      continue;
    }
    for (int j = 0; j < g[i].size(); j++) {
      if (g[i][j] == b - 1) {
        cout << g[i][j] << " ";
        cnt++;
      }
    }
  }
}

int main() {
  int numOfVertices;
  cin >> numOfVertices;
  vector<ll> members(numOfVertices);
  for (int i = 0; i < numOfVertices; i++) {
    cin >> members[i];
  }
  sort(members.begin(), members.end(), greater<int>{});
  ll maxEdge = members[0];
  int numOfEdges;
  cin >> numOfEdges;
  vector<vector<int>> path(numOfEdges, vector<int>(2));
  for (int i = 0; i < numOfEdges; i++) {
    cin >> path[i][0] >> path[i][1];
  }
  debug(path);
  int source, destination;
  cin >> source >> destination;
  // TODO
  deleteEdges(numOfVertices, maxEdge, source, destination, path);
  return 0;
}
