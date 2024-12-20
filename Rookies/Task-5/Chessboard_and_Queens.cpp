#include <iostream>
#include <vector>
#include <string>
using namespace std;

int validOpts = 0;
vector<bool> columns(8, false), digonal1(15, false), diagonal2(15, false); 

void placeQueens(const vector<string> &board, int row) {
    if (row == 8) { 
        validOpts++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*' || columns[col] || digonal1[row - col + 7] || diagonal2[row + col]) {
            continue; 
        }

        columns[col] = digonal1[row - col + 7] = diagonal2[row + col] = true;
        placeQueens(board, row + 1);
        columns[col] = digonal1[row - col + 7] = diagonal2[row + col] = false;
    }
}

int main() {
    vector<string> board(8);
    for (int i = 0; i < 8; i++) {
        cin >> board[i]; 
    }

    placeQueens(board, 0); 
    cout << validOpts << endl;
    return 0;
}
