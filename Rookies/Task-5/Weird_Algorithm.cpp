#include <iostream>
using namespace std;

void weirdAlg(long long n) {
    cout << n << " ";

    if(n == 1) {
        return;
    }

    if(n % 2 == 0) {
        weirdAlg(n / 2);
    } else {
        weirdAlg(3 * n + 1);
    }
}

int main() {
    long long n;
    cin >> n;

    weirdAlg(n);

    return 0;
}
