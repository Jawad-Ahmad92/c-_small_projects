#include<iostream>
using namespace std;
int fact(){
    int num;
    long factorial = 1; //long Integer (whole numbers) eg:1000, -50000, 123456789 (no decimal)
    cout<<"enter a positive number:";
    cin>>num;

    if(num<0){
        cout<<"please enter positive number Negative number factorial dosnot exist :"<<endl;
    }
    else{
        for(int i=1;i<=num;i++){
            factorial*=i;
        }
        cout<<"factorial of "<<num<<" is: "<<factorial<<endl;
    }
    return 0;
}


int main()  //main function
{
   fact();  //call the function

    return 0;
}