#include <iostream>
using namespace std;

int main() {
    int price = 20;
    int *pricePtr;
    
    pricePtr = &price;

    // Question: What value will pricePtr return?
    cout << pricePtr << endl;
    // Question: What value will *pricePtr return?
    cout << *pricePtr << endl;

    price = 25;

    // Question: What value will pricePtr return?
    cout << pricePtr << endl;
    // Question: What value will *pricePtr return?
    cout << *pricePtr << endl;

    return 0;
}