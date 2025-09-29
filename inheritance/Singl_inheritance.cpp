#include <iostream>
using namespace std;

// -------------------- Base Class --------------------
class Person {
public:
    string name;   // property of a person
    int age;       // property of a person

    // function of person class
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// -------------------- Derived Class --------------------
// Student is a child class of Person
// It inherits (gets) all properties and methods of Person
class Student : public Person {
public:
    int rollNo;   // property of a student

    // function of student class
    void displayStudent() {
        // call parent class function to show name & age
        displayPerson();  
        // show student’s own data
        cout << "Roll No: " << rollNo << endl;
    }
};

// -------------------- Main Function --------------------
int main() {
    // Create object of Student class
    Student s1;

    // Set values (notice that name and age come from Person class)
    s1.name = "Jawad Ahmad"; 
    s1.age = 22;             
    s1.rollNo = 101;         

    // Show all details
    s1.displayStudent();

    return 0;
}
