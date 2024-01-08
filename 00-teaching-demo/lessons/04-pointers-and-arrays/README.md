# Pointers and arrays

**New pointer related operator**: ```[number]```

**Known as**: Offset operator

**Function**: Dereference a variable but add the number between brackets to the address being dereferenced.

Syntax:

```c++
pricePtr[1] = 0;        // pricePtr [offset of 1] = 0
*(pricePtr + 1) = 0;    // pointed to by (pricePtr + 1 ) = 0
```

```c++
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
    *(pricePtr + 4) = 50; // use offset operator

    for (int i = 0; i < 5; i++) {
        cout << itemsPrice[i];
        if (i != 4) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
```

![Pointers and Arrays visualized](https://media.geeksforgeeks.org/wp-content/uploads/Diagram1-1.png)