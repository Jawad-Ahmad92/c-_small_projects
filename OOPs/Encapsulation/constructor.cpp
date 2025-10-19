#include <iostream>
#include <string>
using namespace std;

class teacher{
	private:
		double salary;
	public:
		string name;
		string department;
		string subject;
		
	void setsalary(double salary){
		this->salary=salary;
	}
	
	void show(){
		cout<<"name is:"<<name<<endl;
		cout<<"department is: "<<department<<endl;
		cout<<"subject is : "<<subject<<endl;
		cout<<"salary is: "<<salary<<endl;
	}
};
int main(){
	
	teacher t1;
	t1.name="Ali";
	t1.department="computer science";
	t1.subject="oops";
	t1.setsalary(150000);
	
	t1.show();
	return 0;
}