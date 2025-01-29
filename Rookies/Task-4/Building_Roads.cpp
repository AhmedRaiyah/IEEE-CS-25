#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;
vector<bool> visited;

int find(int a) {
    if (parent[a] == a) { 
        return a;
    }

    return parent[a] = find(parent[a]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        parent[b] = a;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    parent.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        unite(a, b);
    }

    vector<int> components;
    visited.resize(n + 1, false);

    for (int i = 1; i <= n; i++) {
        int root = find(i);

        if (!visited[root]) {
            components.push_back(root);
            visited[root] = true;
        }
    }

    vector<pair<int, int>> newRoad;
    for (int i = 1; i < components.size(); i++) {
        newRoad.push_back({components[i - 1], components[i]});
        unite(components[i - 1], components[i]);
    }

    cout << newRoad.size() << endl;

    for (int i = 0; i < newRoad.size(); i++) {
        cout << newRoad[i].first << " " << newRoad[i].second << endl;
    }

    return 0;
}