#include <iostream>
using namespace std;
int main(){
	
	int arr[10],max,min;
	for(int i=0;i<10;i++){
		cout<<"enter value:";
		cin>>arr[i];
	}
	cout<<endl;
	
	max=arr[0];
	min=arr[0];
	for(int j=0;j<10;j++){
		if(max<arr[j]){
		max=arr[j];
		}
		if(min>arr[j]){
		min=arr[j];
	}
	}
        cout<<"the maximaum number is:"<<max<<endl;
        cout<<"the mnimum number is:"<<min<<endl;
        
	
	return 0;
}