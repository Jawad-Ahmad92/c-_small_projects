#include <iostream>
#include <string>
using namespace std;
class Book{
	private:
	int BookID,pages;
	double price;
	
	public:
		void get(){
			cout<<"enter Book ID: ";
			cin>>BookID;
			cout<<"enter book pages: ";
			cin>>pages;
			cout<<"enter book price: ";
			cin>>price;
		}
		void show(){
			cout<<"The book ID is: "<<BookID<<endl;
			cout<<"The book pages is: "<<pages<<endl;
			cout<<"The book price is: "<<price<<endl;
		}
		void set(int id,int pg,double pr){
			BookID = id;
			pages = pg;
			price = pr;
		}
		
		double getprice(){
			return price;
		}
};

int main()
{
	Book b1 ,b2;
	b1.get();
	b2.set(2,320,150.75);
	cout<<"the detail of the most costly book of the follows:"<<endl;
	
	if(b1.getprice() > b2.getprice()){
		b1.show();
	}
	else{
		b2.show();
	}
	
}