#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr =&a;
    
    //chnage the value using pointer
    *ptr=50;
    
    cout<<"a is:"<<a<<endl;  //a=10
    cout<<"&a is:"<<&a<<endl;  //address of that a
    cout<<"ptr is:"<<ptr<<endl;  //store address of that a
    cout<<"*ptr is:"<<*ptr<<endl; // mean "go to that address and get value"
    

            //Pointer with Arrays
      cout<<"second code Pointer with Arrays"<<endl;
    int arr[3] = {10, 20, 30};
    int *p = arr; // arr’s name itself is the address of its first element

    cout <<"p is:"<<*p << endl;       // 10
    cout <<"*(p+1) is :"<< *(p + 1) << endl; // 20
    cout <<"*(p+2) is :"<< *(p + 2) << endl; // 30

    return 0;
}

