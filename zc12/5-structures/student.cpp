#include <iostream>
using namespace std;

struct addressStruct {
    string barangay;
    string city;
};

struct StudentRecord {
    string name;
    int id;
    string program;
    char sex;
    addressStruct address;
};

void setStudentRecordValues(StudentRecord &student, string name, int id, string program, char sex, string barangay, string city) {
    student.name = name;
    student.id = id;
    student.program = program;
    student.sex = sex;
    student.address.barangay = barangay;
    student.address.city = city;
}

void displayStudentRecord(StudentRecord student) {
    string sex = student.sex == 'M' ? "Male" : "Female";
    
    cout << "=======\n";
    cout << "The student's name is " << student.name << ".\n";
    cout << student.name << "'s id is " << student.id << ".\n";
    cout << student.name << "'s program is " << student.program << ".\n";
    cout << student.name << "'s sex is " << sex << ".\n";
    cout << student.name << " resides in " << student.address.barangay << ", " << student.address.city << ".\n";
    cout << "=======\n";
}

int main() {
    StudentRecord students[2];

    setStudentRecordValues(students[0], "Lester Liby V. Ojeñar", 2, "BS Computer Science", 'M', "Carolina", "Naga City");
    // students[0].name = "Lester Liby V. Ojeñar";
    // students[0].id = 2;
    // students[0].program = "BS Computer Science";
    // students[0].sex = 'M';
    // students[0].address.barangay = "Carolina";
    // students[0].address.city = "Naga City";

    students[1].name = "Mildred R. Relayo";
    students[1].id = 3;
    students[1].program = "BS Computer Science";
    students[1].sex = 'F';
    students[1].address.barangay = "Del Rosario";
    students[1].address.city = "Naga City";

    for(short i = 0; i < 2; i++) {
        displayStudentRecord(students[i]);
        // displayStudentRecord(*(students + i));
    }

    displayStudentRecord(students[0]);
    displayStudentRecord(students[1]);

    cout << "=======\nFirst Batch:\n";

    StudentRecord Neil, Mark;

    Neil.name = "Neil David L. Villanueva";
    Neil.id = 0;
    Neil.program = "BS Computer Science";
    Neil.sex = 'M';
    Neil.address.barangay = "Pacol";
    Neil.address.city = "Naga City";

    displayStudentRecord(Neil);

    Mark.name = "Mark John M. Tres Reyes";
    Mark.id = 1;
    Mark.program = "BS Computer Science";
    Mark.sex = 'M';
    Mark.address.barangay = "Sta. Cruz";
    Mark.address.city = "Naga City";

    displayStudentRecord(Mark);

    StudentRecord *ptrStudent = &Mark;
    // cout << ptrStudent->name << "\n";
    // cout << ptrStudent->address.barangay << "\n";

    ptrStudent->address.barangay = "Panganiban";

    displayStudentRecord(Mark);

    return 0;
}
/*
    int lottoNumbers = [1, 2, 3, 4, 5, 6]; // 6/58 lotto
    // Lazada
    product table = {"blue", 100, "plastic", 250} // color, in stock, type, amount sold
*/

/* 
string name[100];
int id[100];

id[1] = 2; // 1st index is for Mark
name[0] = "Marc John M. Tres Reyes"; // 0th index is for Neil 
// 1000, 1,000,000

StudentRecord students[100];

students[1].id = 2;
students[1].name = "Marc John M. Tres Reyes";
*/