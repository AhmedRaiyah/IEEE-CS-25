#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int appleDiv(vector<int> &arr, int endPt, int currentTotal, int total) {
    if(endPt == 0) {
        return abs((total - currentTotal) - currentTotal);
    }

    return min(appleDiv(arr, endPt - 1, currentTotal + arr[endPt - 1], total), 
            appleDiv(arr, endPt - 1, currentTotal, total));

}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    cout << appleDiv(arr, n, 0, total);

    return 0;
}