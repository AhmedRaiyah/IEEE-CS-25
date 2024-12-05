#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;
    
    vector<long long> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int counter = 0;
    int k = 0;

    for (int i = 0; i < n - 2; i++) {
        
        while (k < n && points[k] - points[i] <= d) {
            k++;
        }

        long long validSeg = k - i - 1;

        if (validSeg >= 2) {
            counter += (validSeg * (validSeg - 1)) / 2; // searched for this line only since previous calculations were only right for the given example
        }
    }
    
    cout << counter << endl;
    
    return 0;
}


