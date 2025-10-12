#include <iostream>
using namespace std;
class rectangular{
    private:
           double length;
           double width;
    public:
          int getdata(double l,double w);
          int calculate();
          int dispaly();
};
int rectangular::getdata(double l,double w){
    length=l;
    width=w;

}
int rectangular::calculate(){
    return length*width;
}
int rectangular::dispaly(){
    cout<<" Total area of a rectangle is: "<<calculate()<<endl;
}
int main()
{
   rectangular area1;
   area1.getdata(5,3);
   area1.calculate();
   area1.dispaly();

    return 0;
}