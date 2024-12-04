#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string direction;
    cin >> direction;
    vector<int> positions(n);

    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    int minCollisionTime = INT_MAX;
    
    for (int i = 0; i < n - 1; i++) {
        if (direction[i] == 'R' && direction[i + 1] == 'L') {
            int collisionTime = (positions[i + 1] - positions[i]) / 2;
            minCollisionTime = min(minCollisionTime, collisionTime);
        }
    }

    if (minCollisionTime == INT_MAX) {
        cout << "-1" << endl;  
    } else {
        cout << minCollisionTime << endl;
    }

    return 0;
}


// This problem was a bit difficult to understand solve so the whole answer was not copied,
// but I did not come up with the answer on my own.