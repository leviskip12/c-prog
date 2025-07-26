/*
Author:Levis kipruto chumba
REG :BSE-01-0036/2025
Desccription: program to demonstrate 3D array
Date 20-07/2025*/

#include <iostream>
using namespace std;

//main 
int main() {
	//initializing array
    int array[2][2][3] = {
	
    
        {
            {5, 10, 15},
            {20, 25, 30}
        },
        {
            {35, 40, 45},
            {50, 55, 60}
        }
    };
  for(int i=0;i<2;i++){
  
   for (int j=0;j<2;j++){
    for(int k=0;k<3;k++){
     	cout<< array [i][j][k]<<"\t";
	}
     cout<<endl;
	}
	cout<<endl;
	}
    return 0;
}