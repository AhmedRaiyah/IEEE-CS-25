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

    int police = 0, unResolved = 0; 

    for(int i = 0; i < n; i++) {
        if(i == 0 && arr[i] == -1) {
            unResolved++;
        } else if (i == 0 && arr[i] >= 1) {
            police += arr[i];
        } else {
            if(arr[i] == -1 && police >= 1) {
                police--;
            } else if(arr[i] == -1 && police < 1){
                unResolved++;
            } else {
                police += arr[i];
            }
        }
    }

    cout << unResolved;

    return 0;
}