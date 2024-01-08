# Variable Declaration and Memory Allocation Visualized
![Variable Declaration and Memory Allocation Visualized](https://img.brainkart.com/imagebk37/yXA2fgw.jpg)

# What are pointers?
**Definition**: A pointer is a variable that stores the memory address of an object.

```c++
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20
  
  // firstvalue is 10
  cout << "firstvalue is " << firstvalue << '\n';

  // secondvalue is 20
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
```

```*p1``` and ```*p2``` are example of pointers.

> [!NOTE]
> You can read more [here](https://learn.microsoft.com/en-us/cpp/cpp/pointers-cpp?view=msvc-170#:~:text=A%20pointer%20is%20a%20variable,arrays%20or%20other%20data%20structures.).

# Importance of Pointers
1. Efficiently use memory
2. Enhance code execution speed

# Common Use Cases
1. Pass data between functions efficiently
2. Handling Data Structures, like Linked Lists and Trees
3. Dynamically allocate and deallocate memory

> [!NOTE]
> You can read more [here](https://www.linkedin.com/pulse/importance-pointer-constants-modern/).