#include<iostream>
using namespace std;

class Bank{
    private:
    string branch_name;
    string branch_code;
    string address;
    int number_of_staff;
    public:
      int get(){
        cout<<"enter branch name: ";
        getline(cin,branch_name);
        cout<<"enter branch code: ";
        getline(cin,branch_code);
        cout<<"enter this branch address: ";
        getline(cin,address);
        cout<<"enter number of staff they work there: ";
        cin>>number_of_staff;

        return 1;
      }

      int display(){
        cout<<"name of the branch is: "<<branch_name<<endl;
        cout<<"branch code is: "<<branch_code<<endl;
        cout<<"addres of the branch is: "<<address<<endl;
        cout<<"number of the staff is: "<<number_of_staff<<endl;

        return 1;
      }


};

int main(){
Bank Banker;

cout<<"enter bank information"<<endl;
Banker.get();

cout<<"\n     bank info is "<<endl;
Banker.display();

    return 0;
}