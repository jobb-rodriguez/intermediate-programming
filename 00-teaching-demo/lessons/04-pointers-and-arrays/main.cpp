#include <iostream>
using namespace std;

int main() {
    int itemsPrice[5];
    int *pricePtr;

    pricePtr = itemsPrice;
    *pricePtr = 10;

    pricePtr++;
    *pricePtr = 20;

    pricePtr = &itemsPrice[2];
    *pricePtr = 30;

    pricePtr = itemsPrice + 3;
    *pricePtr = 40;

    pricePtr = itemsPrice;
    *(pricePtr + 4) = 50;

    for (int i = 0; i < 5; i++) {
        cout << itemsPrice[i];
        if (i != 4) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}