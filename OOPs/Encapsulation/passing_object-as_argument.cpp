#include<iostream>
using namespace std;
class Travel{
    private:
    int km,hr;
    public:
    Travel(){
        km=hr=0;
    }

    int get(){
        cout<<"enter kilometers :";
        cin>>km;
        cout<<"enter hours:";
        cin>>hr;

    }
    int show(){
        cout<<"you traveled: "<<km<<"km"<<" in "<<hr<<"hourse "<<endl;

    }
    Travel add(Travel p){  //p is a parameter
        Travel T;   //T is object inside function
        T.km=km+p.km;
        T.hr=hr+p.hr;

        return T;
    }
};
int main(){
    Travel my,your,r;
    my.get();
    my.show();
    your.get();
    your.show();
    r=my.add(your);

    cout<<"Total travilli is as follows:"<<endl;
    r.show();

    return 0;
}