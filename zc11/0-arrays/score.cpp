#include <iostream>
using namespace std;

int main() {
    int seatList[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // BUG FOUND
    for(int i = 0; i < 3; i++) {
        // conditions should be correct as well
        for(int j = 0; j < 5; j++) {
            cout << seatList[i][j];
        }
        cout << endl;
    }

    return 0;
}

// PART A: ACCESSING ARRAYS
/*
    studentsScore[3] = 10;
    // 0x16b4fac0c; 10
    // THERE'S A BUG IN OUR PROGRAM!
    // We have debugged our program by adding "[3]"
    cout << studentsScore[3];
*/

/* PART B: ARRAY ELEMENT MANIPULATION

// aliahIdNumber did not adjust our programming convention. 10 - 1
// BUG SOLVED
int gilIdNumber = 0, miccoIdNumber = 5, aliahIdNumber = 10;

studentsScore[gilIdNumber] = 10; // studentScore[0]
studentsScore[miccoIdNumber] = 9; // studentScore[5]
studentsScore[aliahIdNumber] = 10; // studentScore[10]

cout << "Gil's score is " << studentsScore[gilIdNumber] << endl;
cout << "Micco's score is " << studentsScore[miccoIdNumber] << endl;
cout << "Aliah's score is " << studentsScore[aliahIdNumber] << endl;

// BUG FOUND! We are expecting studentScore[9] or Aliah (with an ID Number of 10)'s score to be 10!
cout << studentsScore[0] << " " << studentsScore[5] << " " << studentsScore[9] << " " << studentsScore[aliahIdNumber] << endl;

cout << studentsScore;
*/

/* PART C: DECLARING ARRAY SIZE
int score[5];
int studentsScore[10]; // max score for the quiz is 10

// max score for the seatwork is 5
int studentsSeatworkScore[5] = {5, 3, 2, 4};

// default value for this is 0
cout << studentsSeatworkScore[4] << endl;

// max score for the exam is 100
int studentsExamScore[] = {100, 98, 96, 89};
cout << studentsExamScore[3] << endl;
*/

/* PART D: DISPLAY SPECIFIC ARRAY ELEMENTS

// When learning, it's okay to experience bugs (because it happens even when professionals are coding)
// professionals: $100K
// index for 8
cout << seatList[1][2] << endl;
// index for 15
cout << seatList[2][4] << endl;
// index for 11
cout << seatList[2][0] << endl;
*/