#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> adj;
int maxDist, farthestNode;

void dfs(int node, int dist, vector<bool> &visited) {
    visited[node] = true;
    
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }

    for (auto &[neighbor, cost] : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, dist + cost, visited);
        }
    }
}

int findLongestPath(int start, int n) {
    vector<bool> visited(n, false);
    maxDist = 0;
    dfs(start, 0, visited);
    return farthestNode;
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n);
    
    for (int i = 0; i < n - 1; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
    }

    int start = findLongestPath(0, n);
    int result = maxDist; 

    findLongestPath(start, n);
    
    cout << maxDist << endl;

    return 0;
}
