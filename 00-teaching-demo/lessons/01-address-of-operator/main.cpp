#include <iostream>
using namespace std;

int main() {
    int price = 20, priceVerification;
    int *pricePtr;
    
    pricePtr = &price;
    priceVerification = price;

    cout << pricePtr << endl;
    cout << priceVerification << endl;

    return 0;
}