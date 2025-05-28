
/*Authors name Leis Kipruto Chumba
Reg NO BSE-01-0036/2025
DATE:2/05/2025 */
#include <iostream>
using namespace std;

int main() {
    // Variables to store marks for 3 subjects
    float subject1, subject2, subject3;
    float average;
    
    //  Enter marks for 3 subjects
    cout << "Enter marks for Subject 1 (0-100): ";
    cin >> subject1;
    
    cout << "Enter marks for Subject 2 (0-100): ";
    cin >> subject2;
    
    cout << "Enter marks for Subject 3 (0-100): ";
    cin >> subject3;
    
    // Calculate average
    average = (subject1 + subject2 + subject3) / 3;
    
    // Determine grade according to the average
    char grade;
    if (average >= 70 && average <= 100) {
        grade = 'A';
    } else if (average >= 60 && average <= 69) {
        grade = 'B';
    } else if (average >= 50 && average <= 59) {
        grade = 'C';
    } else if (average >= 40 && average <= 49) {
        grade = 'D';
    } else if (average >= 0 && average <= 39) {
        grade = 'E';
    } else {
        cout << "Invalid average score!" << endl;
        return 1; // Exit with error code
    }
    
    // Display results
    cout << "\nAverage Score: " << average << endl;
    cout << "Grade: " << grade;
    if (grade == 'E') {
        cout << " (Fail)";
    }
    cout << endl;
    
    return 0;
}