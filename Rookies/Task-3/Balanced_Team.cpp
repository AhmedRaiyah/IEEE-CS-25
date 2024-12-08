#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int left = 0, right = 0, maxTeam = 0;

    while (right < n) {
        if (arr[right] - arr[left] <= 5) {
            maxTeam = max(maxTeam, right - left + 1);
            right++;
        } else {
            left++;
        }
    }

    cout << maxTeam << endl;

    return 0;
}