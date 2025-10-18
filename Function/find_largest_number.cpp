#include <iostream>
using namespace std;

//define the function
int find_max(){
    int num1,num2,num3;   //declare three variable
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    cout<<"enter third number: ";
    cin>>num3;
               //conditional statment
    if(num1>num2 && num1>num3){
        cout<<"num1 is greater then num2 and num3 "<<num1<<endl;
    }
        else if(num2>num1 && num2>num3){
          cout<<"num2 is greater then num1 and num3:"<<num2<<endl;
        }

        else if(num1==num2 && num2==num3){
            cout<<"all number are same :"<<num1<<endl;
        }

        else if(num1==num2&&num1>num3){
            cout<<"num1 and num2 is same and greater then num3:"<<num1<<endl;
        }

         else if(num1==num3&&num1>num2){
            cout<<"num1 and num3 is same and greater then num2:"<<num1<<endl;
        }

         else if(num3==num2&&num2>num1){
            cout<<"num2 and num3 is same and greater then num1:"<<num2<<endl;
        }

        else{
            cout<<"num3 is greater then num2 and num3:"<<num3<<endl;
        }
}

int main(){

    //call the function
    find_max();

    return 0;
}