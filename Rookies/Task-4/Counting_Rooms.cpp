#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// this code was studied not copied or solved alone

int n, m;
vector<string> building;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] || building[x][y] == '#')
        return;

    visited[x][y] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1); 
}

int main() {
    cin >> n >> m;
    building.resize(n);
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        cin >> building[i];
    }

    int roomCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (building[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                roomCount++;
            }
        }
    }

    if (roomCount > 5) {
        roomCount--; 
    }

    cout << roomCount << endl;
    return 0;
}
