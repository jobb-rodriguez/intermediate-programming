#include <iostream>
using namespace std;

int main() {
    // const => you cannot change the variable
    const int SIZE = 5;
    SIZE = 10;
    int numberList[SIZE] = {5, -20, 3, 4, -12};

    // Smallest number is the first number (element).
    int smallestNumber = numberList[0];

    for(int i = 0; i < SIZE; i++) {
        if(smallestNumber > numberList[i]) {
            smallestNumber = numberList[i];
        }
    }

    cout << "The smallest number is " << smallestNumber << endl;
}