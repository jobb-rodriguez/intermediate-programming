// GOAL: Avoid repeating code for Trainee
#include <iostream>
using namespace std;

void traineeChant(string name) {
    cout << name << ": Let's go, JC! *claps*\n";
    cout << "Ninja!\n";
}

// FUNCTION OVERLOADING / OVERRIDING
void traineeChant(string name, string& personName) {
    personName += "eeesh";
    cout << name << ": Let's go, " << personName << "! *claps*\n";
    cout << "Ninja!\n";
}


int main() {
    string meds = "Meds", dominic = "Dominic", ulysses = "Ulysses";
    traineeChant(meds);
    traineeChant(dominic, ulysses);
    cout << meds << " " << dominic << " " << ulysses;
    return 0;
}