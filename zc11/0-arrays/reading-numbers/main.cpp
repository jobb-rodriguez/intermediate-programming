#include <iostream>
using namespace std;

int main() {
    const int ROW = 3;
    const int COL = 3;
    int numberList[ROW][COL];

    for (short i = 0; i < ROW; i++) {
        for (short j = 0; j < COL; j++) {
            // BUG FOUND
            // Wrong input was presented.
            // What is the bug?
            // Wrong indices for numberList
            // What is the solution
            // Use [i][j] instead
            cin >> numberList[i][j];
        }
    }

    for (short i = 0; i < ROW; i++) {
        for (short j = 0; j < COL; j++) {
            cout << numberList[i][j];
        }
        cout << endl;
    }
    return 0;
}