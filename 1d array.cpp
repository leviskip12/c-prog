/*Author:Levis kipruto chumbaAuthor
REG :BSE-01-0036/2025
Desccription: program to demonstrate 1D array
Date 26-07/2025*/

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; 


    for (int i = 0; i < 5; i++) {
        cout <<"Index"<< i <<":" <<numbers[i] << endl;
    }

    return 0;
}