#include<iostream>
using namespace std;
class print{
    public:
                //    create same name of two function but diffrent datatype of parametter so its consider diffrent
    void show(int x){
        cout<<"integer x is:"<<x<<endl;
    }
    void show(double y){
        cout<<"double y is :"<<y<<endl;
    }
};

int main(){
    print obj;
    obj.show(10);   //-->thire is int value because it's 10 is integer so 10 is first fun
    obj.show(7.8);  //-->there is fraction value its dattype cld double 7.8 is double its second function

    return 0;
}