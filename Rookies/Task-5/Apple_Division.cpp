#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long appleDiv(vector<int> &arr, int endPt, long long currentTotal, long long total) {
    if (endPt == 0) {
        return abs((total - currentTotal) - currentTotal);
    }

    return min(
        appleDiv(arr, endPt - 1, currentTotal + arr[endPt - 1], total),
        appleDiv(arr, endPt - 1, currentTotal, total)
    );
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    cout << appleDiv(arr, n, 0, total);

    return 0;
}
