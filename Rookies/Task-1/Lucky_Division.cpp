#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isLucky = false;
    for(int i = 0; i < 14; i++) {
        if(n % num[i] == 0) {
            isLucky = true;
            break;
        }
    }

    if(isLucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}