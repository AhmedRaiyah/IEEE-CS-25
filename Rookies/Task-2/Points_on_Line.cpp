#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    
    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int counter = 0;

    for (int i = 0; i < n - 2; i++) {
        int k = i + 2; 
        
        while (k < n && points[k] - points[i] <= d) {
            k++;
        }

        int valid_pairs = k - i - 1;

        if (valid_pairs >= 2) {
            counter += (valid_pairs * (valid_pairs - 1)) / 2;
        }
    }
    
    cout << counter << endl;
    
    return 0;
}
