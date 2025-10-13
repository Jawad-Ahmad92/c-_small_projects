#include <iostream>
using namespace std;
   //first function declaration
int sum();

  //main funtiona
int main(){
    sum();
    return 0;
}

//funtion 1 find sum
int sum(){
    int a,b,s;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    
    //sum 
     s=a+b;
     cout<<"sum is equall:"<<s<<endl;
     return s;
}