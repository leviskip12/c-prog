

/*Author name:Levis kipruto chumba 
Reg No BSE-01-0036/2025
Description program to calculate Simple interest
Date 7/5/2026*/
#include <iostream>
using namespace std;

float calculateSimpleInterest(float principal, float time, float rate) {
    return (principal * time * rate) / 100;
}

int main() {
    float principal, time, rate;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    
    cout << "Enter time : ";
    cin >> time;
    
    cout << "Enter rate of interest: ";
    cin >> rate;
    
    float interest = calculateSimpleInterest(principal, time, rate);
    
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << principal + interest << endl;
    
    return 0;
}