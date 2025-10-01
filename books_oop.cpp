#include <iostream>
#include <string>
using namespace std;
//void display(string title,string author,int year);

class book{
            // class
	public:
	string title;
	string author;
	int year;
	            //function
	void display(string title,string author,int year){
	cout<<"the Tilte of the book is :"<<title<<endl;
	cout<<"the Author of the book is :"<<author<<endl;
	cout<<"the publish year of the book is :"<<year<<endl;
}
};

int main(){
	         //object 1
	book b1;
	b1.title="Pride and Prejudice";
	b1.author="Jane Austen";
	b1.year=1813;
	
	             //object 2
	book b2;
	b2.title="War and Peace";
	b2.author="Leo Tolstoy";
	b2.year=1869;
	
	cout<<"the first book is "<<endl;
	b1.display(b1.title, b1.author, b1.year);
	cout<<"second book is "<<endl;
	b2.display(b2.title, b2.author, b2.year);
	
	return 0;
}
