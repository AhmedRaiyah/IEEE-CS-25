#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int counter = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (binary_search(arr.begin(), arr.end(), arr[i] + k)) {
            counter++;
        }
        if (binary_search(arr.begin(), arr.end(), arr[i] - k)) {
            counter++;
        }
    }

    cout << counter / 2 << endl;

    return 0;
}
