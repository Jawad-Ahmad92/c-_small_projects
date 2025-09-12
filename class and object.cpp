#include <iostream>
using namespace std;

//                        class
class car{
	public:
		string brand;
		int speed;
};
//                        display the car details
void showdetails(string brand,int speed){
	cout<<"enter your car brand:";
	cin>>brand;
	cout<<"enter your car speed km/h:";
	cin>>speed;
	cout<<"barnd name is:"<<brand<<"\n"<<"the car speed is:"<<speed<<"km/h"<<endl;
}

int main()
{
	car c1;
	showdetails(c1.brand,c1.speed);
	
	return 0;
}