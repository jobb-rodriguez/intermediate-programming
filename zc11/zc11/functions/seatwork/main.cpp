/*
=====HONOR CODE=====
Name: Jobb Rodriguez
Subject: CSDC102
Section: 
Type (Seatwork, Quiz, or Exam): Quiz
Date: February 20, 2024
Problem Title: Baymax Super Anti-Fever Spray
Honor Code: 
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice. 
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.  
=====PROBLEM SOLVING PROCESS=====
1. What is asked?
 - The patient's name and initial temperature
 - Baymax's custom messeage
 - The patient's name and final temperature
2. What is the input format?
Patient Name and Patient Temperature
3. What is the expected output format?
Patient Name: Initial Temperature
Baymax's Custom Message
Patient Name: Final Temperaturre
4. What are the problem's constraints?
 - Use C++
 - The function baymaxAntiFeverCure should contain all of Baymax's functionalities
 - Use pass-by-reference when changing the patient's temperature
5. Which data structure and algorithm can we use?
 - Condtionals
 - Function (pass by value and pass by reference)
6. Write the algorithm's pseudocode.
 a. Receive name and temperature
 b. Display the patient's name and temperature.
 c. Run the baymaxAntiFeverCure function (receiving patient name and patient temperature--pass by reference)
  - Check if patient's temperature is normal
   -> Set the default food to "candy"
   -> If Hiro is the patient, set the food to "mango tart cake"
   -> Display f"You're not sick, {patientName}. Have a {food}.\n"
  - The patient's temperature is not normal
   -> If the patient is Hiro, set the temperature to 37.2.
   -> Else, set the temperature to 37.0.
   -> Display "Applying anti-fever spray...\n"
   -> Display f"You're okay now, {patientName}. Ba-la-la-la\n"
 d. Display the patient's name and temperature. 
 Note: The program terminates when there are no more inputs (terminated with Ctrl + C).
*/
#include <iostream>
using namespace std;

void baymaxAntiFeverCure(string patientName, float& patientTemperature) {
    if (patientTemperature >= 36.1 && patientTemperature <= 37.2) {
        string food = "candy";
        if (patientName == "Hiro") {
            food = "mango tart cake";
        }

        cout << "You're not sick, " << patientName << ". Have a " << food << ".\n";
    } else {
        if (patientName == "Hiro") {
            patientTemperature = 37.2;
        } else {
            patientTemperature = 37.0;
        }
        cout << "Applying anti-fever spray...\n";
        cout << "You're okay now, " << patientName << ". Ba-la-la-la\n";
    }
}

int main() {
    string patientName;
    float patientTemperature;

    while (cin >> patientName >> patientTemperature) {
        cout << patientName << ": " << patientTemperature << " degrees Celsius" << endl;
        baymaxAntiFeverCure(patientName, patientTemperature);
        cout << patientName << ": " << patientTemperature << " degrees Celsius" << endl;;
    }

    return 0;
}