/*
Author:Levis kipruto chumba
REG :BSE-01-0036/2025
Desccription:program that demonstrate simple bank system
Date o7-07/2025*/

#include <iostream>
#include<string>

using namespace std;


//base class
class AccountHolder {
	protected:
		string name;
		public:
			//setter
		void	setName(string n){
			name=n;
			

			}
			//getter
			string getName(){
				return name;
			}
		
};
class BankAccount:public AccountHolder{
	private:
		 int accountNumber;
		 double balance;
public:
BankAccount(string n,int accNO,double bal){
	setName (n);
	accountNumber=accNO;
	balance=bal;
	
}
   int getAccountNumber(){
	   return accountNumber;
   }
   double getBalance(){
	   return balance;
   }
};
class SavingsAccount:public BankAccount{
		private:
			double interestRate;
			public:
				SavingsAccount(string n,int accNO,double bal,double iR)
					:BankAccount(n,accNO,bal){
						interestRate=iR;
				}
				double getInterestRate(){
					return interestRate;
				}
	
};

int main(){
	//creating object
	SavingsAccount SA
	("levis kipruto", 123456, 2000.0, 2.5);
    
    cout << "Bank Management System" << endl;
    cout << "Account Holder " << SA.getName() << endl;
    cout << "Account Number " << SA.getAccountNumber() << endl;
    cout << "Balance" << SA.getBalance() << endl;
    cout << "Interest Rate: " << SA.getInterestRate() << "%" << endl;
    return 0;
}