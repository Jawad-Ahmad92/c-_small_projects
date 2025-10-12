#include <iostream>
using namespace std;
class car{
    private:
           string brand;
           double price;
    public: 
             //declare the member function
          int get_data(string brand, double price);
          int display();
};

   // member function define outside the class by "::" scope resolution oprator
int car::get_data(string brand, double price){
    this->brand=brand;
    this->price=price;
}

int car::display(){
    cout<<"car brand is:"<<brand<<endl;
    cout<<"car price is: $"<<price<<endl;
}
int main()
{
    car c1;
    c1.get_data("ferrari",15000);
    c1.display();

    return 0;
}
