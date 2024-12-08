#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t > 0) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long counter = 0;

        for (int i = 0; i < n; i++) {
            int low = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]) - arr.begin();
            int high = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]) - arr.begin();

            counter += (high - low);
        }

        cout << counter << endl;
        t--;
    }

    return 0;
}