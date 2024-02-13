#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << SHRT_MIN << endl;

    // CONSTRAINT
    // our maxmium value is int

    short int amount; // 2,147,483,647

    // BUG: deposit 10,000,000
    cin >> amount;
    cout << amount << endl;

    return 0;
}