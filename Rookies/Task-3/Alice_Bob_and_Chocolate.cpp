#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> time(n);
    for(int i = 0; i < n; i++) {
        cin >> time[i];
    }
    
    int left = 0, right = n-1;
    int alice = 0, bob = 0;
    int aliceSum = 0, bobSum = 0;


    while(right >= left) {
        if(aliceSum <= bobSum) {
            alice++;
            aliceSum += time[left];
            left++;
        } else {
            bob++;
            bobSum += time[right];
            right--;
        }
    }

    cout << alice << " " << bob;

    return 0;
}