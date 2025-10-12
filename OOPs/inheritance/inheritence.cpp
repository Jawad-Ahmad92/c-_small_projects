#include <iostream>
using namespace std;
class person{  //parent or base class
	public:
		string name;
		int age;
		
		// CONSTRUCTOR--> first parent class constructor will be run
	person(){
		cout<<"this is parent constructor"<<endl;
	}
		// DESTRUCTOR-->  second parent class destructor will be run
	~person(){
		cout<<"this is parent distructor"<<endl;
	}
};
class student : public person{   // child or derived class
	public:
	int rollno;
	
	      // display
	void getinfo(){
		cout<<"name is:"<<name<<endl;
		cout<<"age is:"<<age<<endl;
		cout<<"roll no is:"<<rollno<<endl;
	}
	 
	 // CONSTRUCTOR--> second child class constructor will be run 
	student(){
		cout<<"this is child constructor"<<endl;
	}
	
	// DESTRUCTOR-->  first child class destructor will be run
	~student(){
		cout<<"this is child distructor"<<endl;
	}
};
int main(){   // main function
	student s1;
	s1.name= "Jawad Ahmad";
	s1.rollno=4;
	s1.age=19;
	
	//dispaly
	s1.getinfo();
	return 0;
}