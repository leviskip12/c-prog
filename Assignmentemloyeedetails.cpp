/*
Author:Levis kipruto chumba
REG :BSE-01-0036/2025
Desccription program using class to declare emloyee details and display it
Date 15-06/2025*/


#include <iostream>
# include <string>
using namespace std;
  class employee {
  	private :
  	string idno;
  	string	name;
  	string	occupation;
  	public :
  		 employee(string id,string nm ,string occ){
  		 	idno=id;
  		 	name= nm;
  		 	occupation= occ ;
  }
  int display () {
  		cout<<"Emloyee id"<<idno<<endl;
  		cout<<"Name"<<name<<endl;
  		cout<<"Occupation"<<occupation<<endl;
  		return 0;
  }
  };
  
  
  int main () {
  	string id,name,occ;
  	cout<<"Enter employee id "<<endl;
  	cin>>id ;
  	cout<<"Enter the name"<<endl;
  	cin>>name;
  	cout<<"Enter the occupation"<<endl;
  	cin>>occ;
	
  	employee zu_emp(id,name,occ);
  	zu_emp.display();
  	
  		return 0;
  }