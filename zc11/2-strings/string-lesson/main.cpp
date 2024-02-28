#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Ulysses\n";
    cout << name;
    name = "Jobb";
    name += " and Aldrin\n";
    cout << name;

    cout << "===NEXT PART===\n";
    string show("Joe");
    cout << show << endl;
    // cin >> show;
    getline(cin, show);
    cout << show << "(" << show.substr(1, 2) << ")" << endl;
    getline(cin, show);
    cout << show << "(" << show.at(3) << ")" << endl;

    return 0;
}