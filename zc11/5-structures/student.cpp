#include <iostream>
using namespace std;

struct addressStruct {
    string barangay;
    string city;
};

struct StudentRecord {
    string name;
    int id;
    string program; // i.e. BS CS, BS IT, BS IS,  BS DIA
    char sex; // M or F
    addressStruct address;
};

void displayStudentRecord(StudentRecord student) {
    string sex = student.sex == 'M' ? "Male" : "Female";
    cout << "==========\n";
    cout << "The student is " << student.name << ".\n";
    cout << student.name << " has an ID number of " << student.id << ".\n";
    cout << student.name << " is taking " << student.program << ".\n";
    cout << student.name << " is a " << sex << ".\n";
    cout << student.name << " resides in " << student.address.barangay << ", " << student.address.city << ".\n";
    cout << "==========\n";
}

int main() {
    StudentRecord students[2];

    students[0].name = "Andre Miguel Silvestre";
    students[0].id = 3;
    students[0].program = "BS Computer Science";
    students[0].sex = 'M';
    students[0].address.barangay = "Magsaysay";
    students[0].address.city = "Naga City";
    // Dislay Andre's record
    displayStudentRecord(students[0]);

    students[1].name = "Gian Dolor";
    students[1].id = 4;
    students[1].program = "BS Computer Science";
    students[1].sex = 'M';
    students[1].address.barangay = "Liboton";
    students[1].address.city = "Naga City";
    // Dislay Gian's record
    displayStudentRecord(*(students + 1));

    cout << "First Batch:\n==========\n";
    StudentRecord JC, Ulysses;

    // Define JC
    JC.name = "Juan Carlos I. Medenilla";
    JC.id = 0;
    JC.program = "BS Computer Science";
    JC.sex = 'M';
    JC.address.barangay = "Sta. Cruz";
    JC.address.city = "Naga City";

    displayStudentRecord(JC);

    // Define Ulysses
    Ulysses.name = "Ulysses A. Tranquilino";
    Ulysses.id = 1;
    Ulysses.program = "BS Computer Science";
    Ulysses.sex = 'M';
    Ulysses.address.barangay = "Gainza";
    Ulysses.address.city = "Calabanga";

    displayStudentRecord(Ulysses);

    StudentRecord *ptrUlysses = &Ulysses;
    ptrUlysses->address.barangay = "Pacol";
    ptrUlysses->address.city = "Naga City";

    displayStudentRecord(Ulysses);

    return 0;
}

// Array: int, bool, char
// StudentRecord: {string, int, string, char, {string, string}}

/*
string name[100];
int id[100];

id[1] = 2;
name[0] = "Ulyssesheesh";

StudentRecord[1].id = 2;
StudentRecord[1].name = "Ulyssesheesh";
*/