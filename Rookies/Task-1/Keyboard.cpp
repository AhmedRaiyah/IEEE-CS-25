#include <iostream>
#include <string>
using namespace std;

int main() {
    char direction;
    string typedMessage;
    cin >> direction >> typedMessage;

    string keyboardLayout = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    string input = "";

    for (int i = 0; i < typedMessage.length(); i++) {
        char c = typedMessage[i];
        int index = keyboardLayout.find(c);
        if (direction == 'L') {
            input += keyboardLayout[index + 1];  
        } else {
            input += keyboardLayout[index - 1];
        }
    }

    cout << input << endl;
    return 0;
}
