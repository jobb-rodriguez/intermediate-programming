#include <iostream>
#include <iomanip>
using namespace std;

string encryptPassword(string password) {
    string encrypted = "";
    for (int i = 0; i < password.length(); i++) {
        encrypted += "*";
    }
    return encrypted;
}

int main() {
    string password = "incorrect";
    string passwordInput;

    cout << "What is the password?\n";
    cin >> passwordInput;
    // BUG FOUND
    // What is the bug? setw() is expecting an int
    // What is the solution? 
    // cout << setw(10) << setfill('*') << "sample";

    if(passwordInput == password) {
        cout << password << endl;
    } else {
        cout << encryptPassword(password) << endl;
    }
    return 0;
}