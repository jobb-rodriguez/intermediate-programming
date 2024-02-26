#include <iostream>
using namespace std;

// FUNCTION OVERLOADING / OVERRIDING
string traineeChant(string& name, bool isBurr) {
    name = "Burr";
    return name + ": The World Turned Upside Down!\n";
}

string traineeChant(string name) {
    name = "Eliza";
    return name + ": The World Turned Upside Down!\n";
}

int main() {
    string neil = "Neil", alex = "Alex";

    cout << neil << " " << alex << "\n";

    cout << traineeChant(alex);
    cout << traineeChant(neil, true);

    cout << neil << " " << alex;
    return 0;
}