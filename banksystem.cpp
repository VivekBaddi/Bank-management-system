//Basic Bank management system
/*
Features :- 
1.Deposit
2.Withdraw
3.Balance Enquiry
4.Change Paasword
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class bank
{
	public : float balance=1000.0;
			 string uname,password;	
	public:
		void deposit();
		void withdraw();
		void BalanceEnquiry();
		void changepassword();
};

//Function to deposit money
deposit()
{
	float addamm;
	bank obj;
	cout<<"Enter amount of money you want to deposit :- ";
	cin>>addamm;
	obj.balance=obj.balance+addamm;
	cout<<"Amount of money deposited = "<<addamm<<endl;
	cout<<"Available amount = "<<obj.balance<<endl;
}
/********************************************************/

//Function to withdraw money
withdraw()
{
	float wmoney;
	bank obj;

	cout<<"Enter amount of money you want to withdraw :- ";
	cin>>wmoney;
	if(wmoney<=obj.balance)
	{
		obj.balance=obj.balance-wmoney;
		cout<<"Withdrawn amount is = "<<wmoney<<endl;
		cout<<"Available balance = "<<obj.balance<<endl;
	}
	else
	cout<<"Not enough balance.";
}
/********************************************************/

//Function for balance enquiry
BalanceEnquiry()
{
	bank obj;
	cout<<"Available balance in your account is = "<<obj.balance<<endl;
}
/********************************************************/

//Function to change password
changepassword()
{
	bank obj;
	string newpass;
	
	cout<<"Enter current password = ";
	cin>>obj.password;
	
	if(obj.password=="WhiteDevil989")
	{
	cout<<"Enter new password = ";
	cin>>newpass;
	obj.password=newpass;
	cout<<"Your new password is = "<<obj.password<<endl;
	}
	else
	{
		cout<<"Enter valid password. "<<endl;
	}
}
/********************************************************/

//Function to display landing page after successful login
inline void mainpage()
{
	int choice;
	cout<<"**************Welcome to our Banking System**************"<<endl;
	cout<<" 1.Deposit \n 2.Withdraw \n 3.Balance Enquiry \n 4.Change Paasword"<<endl;
	cout<<"Enter your input :- "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			deposit();
			break;
		case 2:
			withdraw();
			break;
		case 3:
			BalanceEnquiry();
			break;
		case 4:
			changepassword();
			break;			
	}
}
/********************************************************/

int main()
{
	bank obj;
	char input;
	// User Login page 
	cout<<"Enter username = ";
	cin>>obj.uname;
	cout<<"Enter password = ";
	cin>>obj.password;
	do{
	if(obj.password=="WhiteDevil989" && obj.uname=="Vivek")
	{
		mainpage();
	}
	else
	cout<<"Invalid username or password "<<endl;
	cout<<"Do you want to perform other operations (y/n) "<<endl;
	cin>>input;
	}while(input=='y');
	/********************************************************/
	
	getch();
}
