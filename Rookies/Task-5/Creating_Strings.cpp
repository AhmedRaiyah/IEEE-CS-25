#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// code fails only one test I cant find answer using recursion

void createStrings(string &s, int index, vector<string> &result) {
    if (index == s.size()) {
        result.push_back(s);  
        return;
    }

    for (int i = index; i < s.size(); i++) {
        if (i > index && s[i] == s[index]) {
            continue;
        }

        swap(s[index], s[i]); 
        createStrings(s, index + 1, result);  
        swap(s[index], s[i]);  
    }
}

int main() {
    string s;
    cin >> s;

    vector<string> result; 
    createStrings(s, 0, result);

    sort(result.begin(), result.end());

    cout << result.size() << endl;  
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;  
    }

    return 0;
}