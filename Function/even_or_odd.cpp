#include<iostream>
using namespace std;
//declare the function
int check_number();

int main(){
    
    //call the function
    check_number();

    return 0;
}
   //define the function
int check_number(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if(num%2==0){
        cout<<"number is even: "<<num<<endl;
    }else{
        cout<<"number is odd: "<<num<<endl;
    }
    return 0;
}