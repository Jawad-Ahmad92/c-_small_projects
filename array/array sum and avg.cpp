#include <iostream>
using namespace std;
int main(){
	
	int arry[5],i,sum=0,avg;
	cout<<"enter a enteger:";
	cin>>arry[0];
	cout<<"enter a enteger";
	cin>>arry[1];
	cout<<"enter a enteger:";
	cin>>arry[2];
	cout<<"enter a enteger:";
	cin>>arry[3];
	cout<<"enter a enteger:";
	cin>>arry[4];

	for(i=0;i<5;i++){
		sum +=arry[i];
	}
	cout<<"sum is :"<<sum<<endl;
	avg=sum/5;
	cout<<"average is : "<<avg<<endl;
	
	return 0;
}