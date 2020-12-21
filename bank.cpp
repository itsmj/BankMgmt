#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class bank
{
	char name[100], address[100], y;
	int balance;
	public :
				void Open_account();
				void Deposit_money();
				void Withdraw_money();
				void Display_account();
		};


void bank :: Open_account()
{
	cout<<"Enter your full name ::" ;
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your address ::";
	cin.ignore();
	cin.getline(address,100);
	cout<<"What type of account you want to open saving (s) or current (c) \n";
	cin>>y;
	cout<<"enter amount to deposit :: ";
	cin>>balance;
	cout<<"Your account is created \n ";
}


void bank :: Deposit_money()
{  
   int a;
	cout<<"Enter how much you want to deposit ::";
	cin>>a;
	balance+=a;
	cout<<"total amount after deposit :: \t"<<balance;
}


void bank :: Display_account()
{
	
	cout<<"\nYour full name :: "<<name;
	cout<<"\nYour address :: "<<address;
	cout<<"\nType of account that you opened :: "<<y;
	cout<<"\nAmount you deposited :: "<<balance;
}


void bank :: Withdraw_money()
{   
    float amount ;
	
	cout<<"Enter amount to withdraw :: ";
	cin>>amount;
	balance=balance-amount;
	cout<<"Now total amount is left :: "<<balance;
}


int main()
{ 
int ch,x;
bank obj;
   do
   {
			cout<<"\n1)Open account \n";
			cout<<"2)Deposit money \n";
			cout<<"3)Withdraw money \n";
			cout<<"4)Display account\n";
			cout<<"5)Exit \n";
			cout<<"select from the above options \n";
			cin>>ch;
			
			switch(ch)
			{
				case 1 :cout<<" 1) Open account \n";
				obj.Open_account();
				break;
				
				case 2 : cout<<"2)Deposit money \n";
				obj.Deposit_money();
				break;
				
				case 3 : cout<<"3)Withdraw money \n";
				obj.Withdraw_money();
				break;
				
				case 4 : cout<<"4)Display account \n";
				obj.Display_account();
				break;
				
				case 5 : 
						if(ch==5)
					{
						exit(1);
					}
					
				default:
						cout<<"try again \n";
			}
				
				cout<<"\nDo you want to select next option then press :: y \n";
				cout<<"if you want to exit then press :: N \n";
				x=getch();
				if (x == 'n' || x == 'N')
				exit(0);
			}
	
	while(x=='y' || x=='Y');
	
	
	getch();
	return 0;
}
