/*
Author:Levis kipruto chumbaAuthor
REG :BSE-01-0036/2025
Desccription: program to demonstrate simple library system
Date o6-07/2025*/


#include <iostream>
#include <string>
using namespace std;
//base class
class Person{
	protected:
	string	name;
		public:
			//setter
			void setName(string n){
				name=n;
				
			}
			string getName(){
				return name;
			}
			
};
class LibraryMember:public Person{
	private:
		int memberID;
		int booksBorrowed;
		public:
		LibraryMember(string n,int mID,int booksB){
				setName(n);
				memberID=mID;
				booksBorrowed=booksB;
				
			}
		int	getMemberID(){
				return memberID;
			}
		int	getBooksBorrowed(){
				return booksBorrowed;
			}
			
};
class PremiumMember:public LibraryMember{
	private:
		double membershipFee;
		public:
			PremiumMember(string n,int mID,int booksB,double mFee)
				:LibraryMember(n,mID,booksB){
				membershipFee=mFee;
				
			}
			public:
		double	getMembershipFee(){
				return membershipFee;
			}
};
int main(){
	//creating object
	PremiumMember Pm
	 ("levis",772,4,2000);
	cout<<"Name"<<Pm.getName()<<endl;
	cout<<"Membership ID"<<Pm.getMemberID()<<endl;
	cout<<"BooksBorrowed"<<Pm.getBooksBorrowed()<<endl;
	cout<<"MembershipFee"<<Pm.getMembershipFee()<<endl;
	return 0;
}