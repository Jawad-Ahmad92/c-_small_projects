#include <iostream>
#include <string>
using namespace std;

// Base class
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

// Derived class from Person
class Student : public Person {
public:
    int rollNo;

    void setStudent(string n, int a, int r) {
        setPerson(n, a); // call base class function
        rollNo = r;
    }

    void showStudent() {
        showPerson(); // show base class data
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class from Student
class Graduate : public Student {
public:
    string researchArea;

    void setGraduate(string n, int a, int r, string area) {
        setStudent(n, a, r); // call parent function
        researchArea = area;
    }

    void showGraduate() {
        showStudent(); // show parent (student + person) data
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    Graduate g1;
    g1.setGraduate("Jawad Ahmad", 22, 101, "Artificial Intelligence");
    g1.showGraduate();

    return 0;
}
