#include <iostream>
using namespace std ;
int main()
{
	int number,option ;
	char letter;
	cout<<"1:convert ASCII value to char"<<endl;
	cout<<"2:convert char to ASCII value"<<endl;
	cout<<"enter your option:";
	cin>>option;
	
	switch(option)
	{
		case 1:
			cout<<"enter number:"; 
			cin>>number;
			cout<<"the corrospondin character is:"<<char(number)<<endl;
			break;
		case 2:
			cout<<"enter a letter:";
			cin>>letter;
			cout<<"the ascii value of a letter is :"<<int(letter)<<endl;
			break;
		default:
			cout<<"invalid";
	}
	
	return 0;
}