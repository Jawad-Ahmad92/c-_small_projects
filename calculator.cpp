#include <iostream>
using namespace std;
int main(){
	
	double num1, num2;
	char op;
	
	cout << "Enter your first integer, operator, and second integer" << endl;
	cin >> num1 >> op >> num2;
	
	if(op=='+')
		cout << "Result is: " << num1+num2;
	else if(op=='-')
		cout << "Result is: " << num1-num2;
	else if(op=='*')
		cout << "Result is: " << num1*num2;
	else if(op=='/'){
		if(num2 !=0)
			cout << "Result is: " << num1/num2;
		else
			cout << "Division is not possible";	
	}
	else if(op=='%'){
		if(num2 !=0)
			cout << "Result is: " << num1/num2;
		else
			cout << "Division is not possible";
	}
	else
		cout << "Invalid operator";
	
	return 0;
}
