/*
1. What is asked?
We are asked to print each number from 1 to 100 on a new line.
There are conditions for multiples of 3, multiples of 5, and both.
2. What is the input format?
The program does not receive inputs
3. What is the expected output format?
NUM\n
Fizz\n
Buzz\n
FizzBuzz\n
4. What are the problem's constraints?
Language: None; Memory: None; Time: None
5. Which data structure and algorithm can we use?
- Loop
- Modulo
- Condition
6. Write the algorithm's pseudocode
 a. Create a loop that starts from 1 and ends on 100
 b. Check if condition applies to the current number (Use modulo operator)
  - Multiple of 3 and 5: Print "FizzBuzz"
  - Multiple of 3: Print "Fizz"
  - Multiple of 5: Print "Buzz"
  - Else: Print NUM
 c. Print the new line.
*/
#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 100; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz";
        } else if (num % 3 == 0) {
            cout << "Fizz";
        } else if (num % 5 == 0) {
            cout << "Buzz";
        } else {
            cout << num;
        }
        cout << endl;
    }
    return 0;
}