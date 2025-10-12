#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   //
using namespace std;
int main(){
	
//	random number genarator

	srand(time(0));
	
//	generate random nuber between 1 to 100

	int randomnumber=rand()%100+1;
	int guess;
	
	cout<<"-----------"<<"Welcome to number guessing game!"<<"-------------"<<endl;
	cout<<"guess the number between 1 to 100:"<<endl;
	
//	loops run untill gussing right number
	do{
		cout<<"enter your guess number: ";
		cin>>guess;
		
		if (guess > randomnumber){
			cout<<"your guess number is too high ! Try again"<<endl;
		}
		else if(guess < randomnumber){
			cout<<"your guess number is too low ! Try again"<<endl;
		}
		else
		cout<<"congratulation! you guess right number:"<<randomnumber<<endl;
	}while(randomnumber !=guess);
	
	
	
	return 0;
}