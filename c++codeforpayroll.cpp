

/*
Author: Levis Kipruto chumba 
Reg No:BSE-01-0036/2025
Description: Calculate gross pay,taxes and net pay based on the hours worked
Date 07/52025*/
#include <iostream>
using namespace std;

void calculatePay(float hours, float wage) {
    float grossPay, taxes, netPay;
    
    // Calculate gross pay with overtime
    if (hours > 40) {
        grossPay = 40 * wage + (hours - 40) * wage * 1.5;
    } else {
        grossPay = hours * wage;
    }
    
    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = 600 * 0.15 + (grossPay - 600) * 0.20;
    }
    
    // Calculate net pay
    netPay = grossPay - taxes;
    
    // Display results
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;
}

int main() {
    float hoursWorked, hourlyWage;
    
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    
    cout << "Enter hourly wage: $";
    cin >> hourlyWage;
    
    calculatePay(hoursWorked, hourlyWage);
    
    return 0;
}
