# Dereference operator (*)
**Purpose**: Access the variable which the variable is pointing to.

**Read as**: value pointed to by

**Syntax**:

```c++
*variable_name
```

```c++
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
```

![Address-of Operator Visualized](../../assets/img/dereference_operator.png)