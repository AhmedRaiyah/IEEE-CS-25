#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int steps = 0, maxIndex = 0, minIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if(arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
    }

    steps = maxIndex;

    if(minIndex < maxIndex) {
        minIndex++;
    }

    steps += (n - minIndex - 1);

    cout << steps;

    return 0;
}
