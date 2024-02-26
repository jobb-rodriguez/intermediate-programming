#include <iostream>
#include <iomanip>
// #include <cmath>
using namespace std;

unsigned long long powByHand(int base, int exponent) {
    int total = base;
    for (int i = 0; i < exponent; i++) {
        total *= base;
    }
    // BUG FOUND
    // What is the bug? Returned base (expected total)
    // What is the solution? Return total
    return total;
}

int main() {
    // BUG FOUND
    // What is the bug? Lacks the exponent
    // What is the solution? Add the exponent
    // cout << pow(69, 2);
    cout << powByHand(69, 11) << endl;
    cout << setw(10);
    cout << "12345";
    return 0;
}