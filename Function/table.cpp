#include<iostream>
using namespace std;

int table(){
    int num,length;
    cout<<"enter a table number: ";
    cin>>num;
    cout<<"enter lenght of the table: ";
    cin>>length;

    for(int i=1;i<=length;i++){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }

    return 0;
}

int main(){
   
table();

    return 0;
}