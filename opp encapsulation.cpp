#include <iostream>
using namespace std;
class teacher{
	private:
		double salary;
	public:
	     //proprties/attributes
	string name;
	string department;
	string subject;
	
	//member function/methods
	
void change_department(string newdep){
	department = newdep;
}
	  //setter  --> access indirect to private properties
void setsalary(double s){
	salary =s;
}

    //getter  --> getter weight the private properties
double getsalary(){
	return salary;
}
void  display(){
	cout<<"name is :"<<name<<endl;
	cout<<"department is :"<<department<<endl;
	cout<<"subject is :"<<subject<<endl;
	cout<<"salary is :"<<salary<<endl;

}
};
int main()
{
	teacher t1;  //t1-->objecte
	t1.name="Ahmad";
	t1.department="maths";
	t1.subject="object orreinted programming";
	t1.setsalary(25000);
	t1.change_department("computer science");
	      //2nd objecte
	teacher t2;
	t2.name="Ali";
	t2.department="DVM";
	t2.subject="biology";
	t2.setsalary(40000);
	
	     //display/print
	t1.display();
	cout<<"     second teacher info is:"<<endl;
	t2.display();
	
	
	return 0;
}