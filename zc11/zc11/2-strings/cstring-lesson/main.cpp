#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char letter = 'A';
    string letters = "AB";
    // lettersCString = {'A', 'B', '\0'};
    // lettersCString = {'A', '\0'};
    char lettersCString[4] = "Z"; 
    // Without the '\0', the array continuously references other memory addresses.
    char lettersCStringVariant[] = {'A', 'B', 'C', '\0'};

    cout << "Letter: " << letter << endl;
    cout << "Letters: " << letters << endl;
    cout << "Letters (in C-String): " << lettersCString << endl;
    cout << "Letters (in C-String Variant): " << lettersCStringVariant << endl;
    
    cout << "======NEXT PART======\n";
    
    strcpy(lettersCString, "ABCDEFG");
    strncpy(lettersCStringVariant, "ABCDEFG", 2);
    cout << "Letters (in C-String): " << lettersCString << "(" << strlen(lettersCString) << ")" << endl;
    cout << "Letters (in C-String Variant): " << lettersCStringVariant << "(" << strlen(lettersCStringVariant) << ")"  << endl;
    
    cout << "======NEXT PART======\n";
    strcat(lettersCString, "JC and Karl");
    strcat(lettersCStringVariant, "JC and Karl");
    cout << "Letters (in C-String): " << lettersCString << "(" << strlen(lettersCString) << ")"  << endl;
    cout << "Letters (in C-String Variant): " << lettersCStringVariant << "(" << strlen(lettersCStringVariant) << ")"  << endl;

    lettersCStringVariant[0] = 'M';
    cout << "Letters (in C-String Variant): " << lettersCStringVariant << "(" << strlen(lettersCStringVariant) << ")"  << endl;
    
    cout << "======NEXT PART======\n";
    cin >> lettersCString;
    cout << "Letters (in C-String): " << lettersCString << "(" << strlen(lettersCString) << ")"  << endl;
    return 0;
}