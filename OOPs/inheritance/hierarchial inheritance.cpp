/* Hierarchical Inheritance

? Multiple derived classes inherit from the same base class.

Relation: One parent ? many children.

Use: When different child classes share a common parent.
      syntax:
class Person { };
class Teacher : public Person { };
class Student : public Person { }; */

#include <iostream>
using namespace std;
   // parent class
class person{
	public:
	string name;
	int age;
};
   //child class
class student : public person{
	public:
	     int rollno;
	     
	     void show_student(){
	     	cout<<"name is: "<<name<<endl;
	     	cout<<"age is: "<<age<<endl;
	     	cout<<"roll no is: "<<rollno<<endl;
		 }
};
  //child class
class teacher : public person{
	public:
		string subject;
		
		 void show_teacher(){
	     	cout<<"name is: "<<name<<endl;
	     	cout<<"age is: "<<age<<endl;
	     	cout<<"subject no is: "<<subject<<endl;
		 }
};
int main(){
	// student
	  cout<<"\n student info \n";
	student s;
	s.name="jawad";
	s.age=19;
	s.rollno=4;
	s.show_student();
	  cout<<"\n techer info \n";
	// teacher
	teacher t;
	t.name="khan";
	t.age=36;
	t.subject="oops";
	t.show_teacher();
	
	
	return 0;
}