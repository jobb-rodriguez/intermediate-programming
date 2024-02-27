#include <iostream>
using namespace std;

int main() {
    string studentAName = "Rosella", studentBName("David");

    studentAName += " Jade";

    cout << studentAName.find("Jade") << " and " << studentBName.insert(1, "Nathaniel") << endl;

    cout << "===NEXT PART===\n";

    getline(cin, studentAName);
    cout << studentAName << endl;
    cin.ignore(20, '\n');
    return 0;
}