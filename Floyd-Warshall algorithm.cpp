#include <bits/stdc++.>

using namespace std;

void floydWarshall(int n, vector<vector<int>> &adj) {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
      }
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> adj(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }

  floydWarshall(n, adj);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
