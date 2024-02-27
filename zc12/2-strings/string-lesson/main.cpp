#include <iostream>
using namespace std;

int main() {
    string studentAName = "Rosella", studentBName("David");

    studentAName += " Jade";

    cout << studentAName.find("Jade") << " and " << studentBName.insert(1, "Nathaniel") << endl;

    cout << "===NEXT PART===\n";

    getline(cin, studentAName);
    cout << studentAName << endl;
    // ignore 20 characters on the next cin, end reading after '\n'
    cin.ignore(20, '\n');
    return 0;
}
