/*
Author:Levis kipruto chumbaAuthor
REG :BSE-01-0036/2025
Desccription: program to demonstrate 2D array
Date 20-07/2025*/

#include <iostream>
using namespace std;
//main 
int main() {
	//initializing
    int matrix[2][3] = {
        {5, 10, 15},
        {20, 25, 30}
    };

    for(int i=0;i<2;i++){
     for(int j=0;j<3;j++)
     	cout<< matrix [i][j]<<"\t";
     cout<<endl;
	}
    return 0;
}
