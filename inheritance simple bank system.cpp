/*
Levis kipruto chumbaAuthor
REG :BSE-01-0036/2025
Desccription: program to demonstrate simple library system
Date 30-06/2025*/



#include <iostream>
#include<string>
using namespace std;
class AccountHolder{
	protected:
		string name;

};
//declaring class
class BankAccount:public AccountHolder{
	private:
		int accountNumber;
		double balance;
public:
	BankAccount(string n,int accNO,double bal){
		name=n;
		accountNumber=accNO;
		balance=bal;
	}
};
	class SavingsAccount:public BankAccount{
		private:
			double interestRate;
		
	public:
		SavingsAccount(string n,int accNO,double bal,double IR)
		:BankAccount(n,accNO,bal){
			interestRate=IR;
		}
	};
	int main(){
		//create object
		SavingsAccount SA
		("levis",123456,50000,2.5);
		cout<<"SavingsAccout created."<<endl;
		return 0;
	}
		
		