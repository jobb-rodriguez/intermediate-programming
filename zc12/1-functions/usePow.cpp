#include <iostream>
using namespace std;

int main() {
    // 0 to 2
    cout << rand() % 2 << endl;
    // 1 to 2
    cout << 1 + rand() % 2;
    return 0;
}