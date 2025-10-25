//function overridding-->>the same name , same parameter in diffrent class function but its call by class object.
//  in function overiding have must inheritence .

#include<iostream>
using namespace std;
class parent{
    public:

    int show(){
        cout<<"this is parent class function "<<endl;
    }
};

      //inheritence
class child:public parent{
    public:
    int show(){
        cout<<"this is child class function"<<endl;
    }
};

int main()
{
    parent p;
    child c;

    p.show();   //this is parent class function call becuase ther is parent class object denoted by "p"
    
    c.show();  //this is child class function call becuase ther is child class object denoted by "c"

    return 0;
}