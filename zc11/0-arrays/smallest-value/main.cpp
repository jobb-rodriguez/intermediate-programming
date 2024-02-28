#include <iostream>
using namespace std;

int main() {
    const short SIZE = 5;
    const int numberList[SIZE] = {-20, -101, 0, 32, 40};

    int smallestValue = numberList[0];

    for (short i = 0; i < SIZE; i++) {
        if (smallestValue > numberList[i]) {
            smallestValue = numberList[i];
        }
    }

    cout << smallestValue << endl;
    return 0;
}