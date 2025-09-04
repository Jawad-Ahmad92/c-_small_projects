#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// struct to store student data
struct student {
    string name;   // store student name
    int rollno;    // store roll number
    int marks;     // store marks
    float avg;     // store average
};

int main() {
    student s1, s2;   // two student objects (s1 = first, s2 = second)
    char choice;      // user choice for adding more students

    // First Student Input 
    cout << "Enter your first name: ";
    cin >> s1.name;

    cout << "Enter your roll number: ";
    cin >> s1.rollno;

    cout << "Enter your marks: ";
    cin >> s1.marks;

    cout << "Enter your average: ";
    cin >> s1.avg;

    // Show First Student
    cout << "\nYou wrote this detail:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Average: " << s1.avg << endl;

    //Ask for Second Student
    cout << "\nIf you want to add another student detail enter y/n: ";
    cin >> choice;

    // Second Student Input
    if(choice == 'y' || choice == 'Y') {
        cout << "\nEnter second student detail:" << endl;

        cout << "Enter your first name: ";
        cin >> s2.name;

        cout << "Enter your roll number: ";
        cin >> s2.rollno;

        cout << "Enter your marks: ";
        cin >> s2.marks;

        cout << "Enter your average: ";
        cin >> s2.avg;

        // Show Second Student  
        cout << "\nSecond student data you entered:" << endl;
        cout << "Name: " << s2.name << endl;
        cout << "Roll No: " << s2.rollno << endl;
        cout << "Marks: " << s2.marks << endl;
        cout << "Average: " << s2.avg << endl;
    }

    // Exit Case 
    if(choice == 'n' || choice == 'N') {
        cout << "\nExit";   
    }

    return 0;   
}