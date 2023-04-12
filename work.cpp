#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	double balance , number , cashout , Pin , amount, oldPin , newPin;
 	int option;
 	balance=500; //default balance
 	
 	do{
	 
	  cout<<"\n\t***************MENU***************";
	  cout<<"\n\t*                                *";
	  cout<<"\n\t*     1.Transfer                 *";
	  cout<<"\n\t*     2.Authentication           *";
	  cout<<"\n\t*     3.Check balance            *";
	  cout<<"\n\t*     4.Change Pin               *";
	  cout<<"\n\t*     5.Exit                     *";
	  cout<<"\n\t*                                *";
	  cout<<"\n\t**********************************"<<endl;
	  cout<<"Please chose an option:";
	  cin>>option;
	  switch(option)
      {
      	case 1:
      		cout<<"\n\tEnter number"<<endl;
      		cin>> number;
      		if(number+-10)
      		cout<<"Invalid number"<<endl;
      		cout<<"Enter number again"<<endl;
      		cin>>number;
			cout<<"Enter amount"<<endl;
      		cin>>amount;
      		if(balance<amount)
      		cout<<"\n\tYou do not have enough money in your account"<<endl;
      		else
      		balance-=amount; //balance =balance-amount;
      		cout<<"\n\t Your current Balance:$"<<balance<<endl;
      		break;
      	case 2:
      		cout<<"\n\t This service is currently not available!!!"<<endl;
      	default:
		    if(option !=5)
		    cout<<"\n\t Invalid option please try again"<<endl;
			break;
		case 3:
			cout<<"\n\tEnter your Pin ";
			cin>>Pin;
		    cout<<"\n\tYour balance is: $"<<balance<<endl;
			break;	
      	case 4:
      		cout<<"\n\tEnter oldPin "<<endl;
      		cin>>oldPin;
      		cout<<"\n\tEnter newPin"<<endl;
      		cin>>newPin;
      		cout<<"\n\t Confirm newPin"<<endl;
      		cin>>newPin;
      		cout<<"\n\t You have successfull changed your Pin"<<endl;
      		break;
			
	  }
	  
	  
}while(option!=5);
system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	getch();
}