#include <iostream>
using namespace std;

int main() {
    const int ROW = 3;
    const int COL = 3;
    int table[ROW][COL];

    // Receive 9 inputs
    for (int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            cin >> table[i][j];
        }
    }
    // Print the table
    for (int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            cout << table[i][j];
            if (j != COL - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    /* BUG FOUND: Wrong output!
    1 2 3
    4 5 6
    7 8 9
    What is the bug?
    incorrect index variables po sa line 12
    What is the solution?
    cin >> table[i][j];
    */
    return 0;
}