#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> prices(n); 
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    vector<int> barsArr;
    while (q--) {
        int budget; 
        cin >> budget;

        int numOfAvailableBars = upper_bound(prices.begin(), prices.end(), budget) - prices.begin();

        barsArr.push_back(numOfAvailableBars);
        
    }

    for(int i = 0; i < barsArr.size(); i++) {
        cout << barsArr[i] << "\n";
    }

    return 0;
}