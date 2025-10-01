//ATM sanulation system code
//pin==1234;


#include <iostream>
using namespace std;
int main()
{
	int pin=1234,enterpin,balance=50000,amount,option;
	cout<<"enetr PIN:";
	cin>>enterpin;
	
	if(enterpin == pin){
		cout<<"1: check balance\n2: Deposite\n3:Withdraw\n enter option"<<endl;
		cin>>option;
	
	switch(option){
		case 1:
			cout<<"your balance is: $"<<balance<<endl;
			break;
	    case 2:
	        cout<<"enter your deposite amount: $";
	        cin>>amount;
	        balance +=amount;
	        cout<<"New balance is: $"<<balance<<endl;
	        break;
	    case 3:
	        cout<<"enter your withdrawal amount: $";
	        cin>>amount;
	        if(amount <=balance){
	        	balance -=amount;
	        	cout<<"your new balance is : $"<<balance;
			}
			else{
			   cout<<"Insufficient balance:"<<endl;		   
		}
		break;
		default: 
		    cout<<"invalid option"<<endl;
		}
	}
    else
	    cout<<"incorrect password"<<endl;
	
	
	return 0;
}