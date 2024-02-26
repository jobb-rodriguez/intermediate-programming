#include <iostream>
#include <cmath>
using namespace std;

int powHandmade(int base, int power) {
    int total = 1;
    total *= base;
    for (int i = 0; i < power; i++) {
        total *= base;
    }
    return total;
}

int main() {
    cout << sqrt(9) << endl;
    cout << pow(1, 5) << endl;
    cout << pow(7, 11) << endl;
    cout << powHandmade(1, 5) << endl;
    cout << powHandmade(7, 11) << endl;
    
    return 0;
}