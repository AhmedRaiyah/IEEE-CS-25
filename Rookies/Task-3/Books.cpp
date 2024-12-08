#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> timeNeeded(n);
    for(int i = 0; i < n; i++) {
        cin >> timeNeeded[i];
    }

    int booksRead = 0;
    int sum = 0;
    int left = 0, right = 0;

    while(right < n) {
        while(right < n && (timeNeeded[right] + sum) <= t) {
            sum += timeNeeded[right];
            right++;
        }

        booksRead = max(booksRead, right - left);
        sum -= timeNeeded[left];
        left++;
    }

    cout << booksRead;

    return 0;
}