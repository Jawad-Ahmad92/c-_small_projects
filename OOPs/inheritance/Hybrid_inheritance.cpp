#include <iostream>
using namespace std;

// -------- Base Class --------
class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// -------- Derived from Person --------
class Student : virtual public Person {
public:
    int rollNo;

    void setStudent(int r) {
        rollNo = r;
    }

    void showStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

// -------- Derived from Person --------
class Teacher : virtual public Person {
public:
    string subject;

    void setTeacher(string sub) {
        subject = sub;
    }

    void showTeacher() {
        cout << "Subject: " << subject << endl;
    }
};

// -------- Derived from Student & Teacher (Hybrid) --------
class TA : public Student, public Teacher {
public:
    void showTA() {
        // Person part
        showPerson();
        // Student part
        showStudent();
        // Teacher part
        showTeacher();
    }
};

// -------- Main Function --------
int main() {
    TA obj;
    obj.setPerson("Jawad Ahmad", 22);  // from Person
    obj.setStudent(101);               // from Student
    obj.setTeacher("Artificial Intelligence"); // from Teacher

    obj.showTA();   // show all info

    return 0;
}

