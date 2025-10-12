#include <iostream>
using namespace std;

class teacher {
private:
    double salary;   // private property

public:
    string name;        // added: public property
    string department;  // added: public property
    string subject;     // added: public property

    /* constructor --> 
       there is no return type (eg: no void, int)
       name is same as class name (here "teacher")
       constructor is called automatically
    */
    teacher() {
        cout << "hi this is a constructor --> it's automatically call" << endl;
    }

    // member function/method
    void change_department(string newdep) {
        department = newdep;
    }

    // setter --> indirect access to private properties
    void setsalary(double s) {
        salary = s;
    }

    // getter --> to access private properties
    double getsalary() {
        return salary;
    }

    void display() {
        cout << "name is : " << name << endl;
        cout << "department is : " << department << endl;
        cout << "subject is : " << subject << endl;
        cout << "salary is : " << salary << endl;
    }
};

int main() {
    teacher t1;  // t1 --> object

    t1.name = "Ahmad";
    t1.department = "Maths";
    t1.subject = "Object Oriented Programming";
    t1.setsalary(25000);
    t1.change_department("Computer Science");

    // display/print
//    t1.display();
    
    // copy constructor 
    
    teacher t2=t1;
    t2.display();
    return 0;
}
