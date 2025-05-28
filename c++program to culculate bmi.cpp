/*Authors Name: Levis Kipruto Chumba
Reg No BSE-01-0036/2025
Date 27/05/2025*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double weight, height, bmi;
    string category;

    // Enter weight and height
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Classify BMI 
    if (bmi < 18.5) {
        category = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        category = "Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9) {
        category = "Overweight";
    } else {
        category = "Obesity";
    }

    // Display results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nYour BMI is: " << bmi << endl;
    cout << "BMI Category: " << category << endl;

    return 0;
}


