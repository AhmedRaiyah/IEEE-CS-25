#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int left = k, right = n;
    int minLines = n;

    while(left<= right) {
        int mid = (left + right) / 2;
        // cout << "\n-mid = " << mid << endl;
        int temp1 = 0, temp2 = mid;

        while(temp2 > 0) {
            temp1 += temp2;
            // temp1 /= k;
            temp2 /= k;
        }

        if(temp1 >= n) {
            minLines = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout <<minLines;

    return 0;
}
