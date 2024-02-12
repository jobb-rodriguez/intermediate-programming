#include <iostream>
using namespace std;

int main() {
    return 0;
}

// sizeof() by default returns values in bytes
// cout << sizeof(studentsScore) / sizeof(int);

/* PART A: ARRAY ELEMENT MANIPULATION
    score[1] = 5;
    cout << score[1] << endl;

    int yahshuaScore = score[1]; // int yahshuaScore = 5

    cout << "score: " << yahshuaScore << endl; // returns 5


// BUG RESOLVED: programmer forgot use -1 for annIdNumber; value should be 9
int lesterIdNumber = 2, carloIdNumber = 5, annIdNumber = 9;

studentsScore[lesterIdNumber] = 10;
studentsScore[carloIdNumber] = 9;
studentsScore[annIdNumber] = 10;

cout << studentsScore[lesterIdNumber] << endl; // returns 10
cout << studentsScore[carloIdNumber] << endl; // returns 9
cout << studentsScore[annIdNumber] << endl; // returns 10

// EXPECTATION: 10 9 10
// BUG FOUND
cout << studentsScore[2] << " " << studentsScore[5] << " " << studentsScore[9];
*/

/* PART B: ARRAY INITIALIZATION 
    int score[5]; // max score is 5
    
    int studentsScore[10]; // max score is 10
    int studentsQuizScore[5] = {10, 10}; // max score is 10
    cout << studentsQuizScore[4] << endl;

    // BUG FOUND! Array failed to initialize.
    // WHAT IS THE BUG? There's something wrong with studentsSeatworkScore
    // studentsSeatworkScore lacks []
    int studentsSeatworkScore[] = {10, 10, 10};
    cout << studentsSeatworkScore[0] << endl;
    cout << sizeof(studentsSeatworkScore)/sizeof(int) << endl;
*/

/* PART C: 2D ARRAYS
    // BUG FOUND! seatList failed to initialize
    // What is the bug? [][]
    // What's wrong with [][]?
    // Hint: What should we replace [] with?
    // Reply: Curly Braces {}
    // NEW BUG FOUND! compiler failed to read the values
    // What is the bug? []
    // Solution: use curly braces {} for the inner values
    // BUG FOUND: seatList is not an array
    // Solution: Add [][]
    // NEW BUG FOUND: seatList[][]
    // What is the bug? No semi-colon
    // Solution: ;
    
    int seatList[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    cout << seatList[0][0] << endl;

    // Display index of 3
    cout << seatList[0][2] << endl;
    // Display index of 9
    cout << seatList[1][3] << endl;
    // Display index of 12
    cout << seatList[2][1] << endl;
*/

/* PART D: BOOLEAN TYPE ARRAYS
    // QUESTION: Why did it compile even if we used "true/false" and "1/0"?
    // ANSWER: 1 is equivalent to true and 0 is equivalent to false
    // In addition, "true/false" and "1/0" are valid boolean values in C++.

    bool studentsIsEnrolled[5] = {true, false, true, 1, 0};

    cout << studentsIsEnrolled[0] << " " << studentsIsEnrolled[4];
*/

/* PART E: FOR LOOPS
    // PROGRAM WORKS!
    bool studentsIsEnrolled[] = {1, 1, 1, 0, 0};

    for (int i = 0; i < 5; i++) {
        cout << i << ": " << studentsIsEnrolled[i] << endl;
    }

    cout << "======\n";
    // Receive inputs
    bool studentsIsPresent[5];

    for (int i = 0; i < 5; i++) {
        // BUG FOUND
        // What is the bug? Wrong operator for cin "<<"
        // What is the solution: Use the correct operator ">>"

        // QUESTION: Why did our program terminate when we typed "true"?
        // Hint: What type are we expecting?
        // Answer: Boolean value.
        // Follow-up question: Knowing that we are expecting a boolean value,
        // what is the problem with the input "true"?
        // Guess: i is int, so input should be int.
        // Answer: "true" is a string.
        // Final answer: The program is expecting a boolean, and a type string was given which caused the error.
        cout << "Is student " << i << " present? ";
        cin >> studentsIsPresent[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << i << ": " << studentsIsPresent[i] << endl;
    }

*/

/* PART F: 2D FOR LOOPS
    int seatList[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
    // iterate for the row    
    for (int i = 0; i < 3; i++) { 
        // iterate for the column
        // BUG FOUND
        // What happened? Instead of the values in our seat list,
        // random numbers were returned.
        // What is the bug? 
        // Guess: Lagpas ulit array size
        // Hint: What's wrong with the column for loop
        // Answer: we used i < 5
        // What is the solution? Use the index for column, j
        for (int j = 0; j < 5; j++) {
            cout << seatList[i][j];
            if (j < 5) {
                cout << " ";
            }
        }
        cout << endl;
    }
*/
