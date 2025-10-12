#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enyter your age :";
	cin>>age;
	
	if(age >= 18){
		cout<<"you are eligible for vote "<<endl;
	}
	else{
		cout<<"you are not eligible for vote!"<<endl;
	}
	
	return 0;
}