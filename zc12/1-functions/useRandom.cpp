// GOAL: Showcase Avoid Repeating Code through Trainee
#include <iostream>
using namespace std;

void traineeChant(string name) {
    cout << name << ": ";
    cout << "I'm a trainee!\n";
}

int main() {
    string carla = "Carla", mildred = "Mildred", erika = "Erika", jobb = "Jobb";
    // BUG FOUND
    // What is the bug? No newline
    // What is the solution? Add newline
    cout << carla << ": I'm a trainee!\n";
    cout << mildred << ": I'm a trainee!\n";
    cout << erika << ": I'm a trainee!\n";
    traineeChant(jobb);

    return 0;
}