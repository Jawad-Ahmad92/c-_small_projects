
         // parent --> parent --> child = multi inheritence

#include <iostream>
#include <string>
using namespace std;

   //1st class
class person{  //parent or base class
	public:
		string name;
		int age;
		
};
      //2nd class
class student {   // parent  class
	public:
	int rollno;
	 
};
            // 3rd class
class graduate_student : public person, public student{  // child
	public:
	string resaerch_area;
	
	      // display
	void getinfo(){
		cout<<"name is:"<<name<<endl;
		cout<<"age is:"<<age<<endl;
		cout<<"roll no is:"<<rollno<<endl;
		cout<<"reserach area is:"<<resaerch_area<<endl;
	}
};
int main(){   // main function
	graduate_student s1;
	s1.name= "Jawad Ahmad";
	s1.rollno=4;
	s1.age=19;
	s1.resaerch_area="islamabad";
	
	//dispaly
	s1.getinfo();
	return 0;
}