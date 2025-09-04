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

    // -------- First Student Input --------
    cout << "Enter your first name: ";
    cin >> s1.name;

    cout << "Enter your roll number: ";
    cin >> s1.rollno;

    cout << "Enter your marks: ";
    cin >> s1.marks;

    cout << "Enter your average: ";
    cin >> s1.avg;

    // -------- Show First Student --------
    cout << "\nYou wrote this detail:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Average: " << s1.avg << endl;

    // -------- Ask for Second Student --------
    cout << "\nIf you want to add another student detail enter y/n: ";
    cin >> choice;

    // -------- Second Student Input --------
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

        // -------- Show Second Student --------
        cout << "\nSecond student data you entered:" << endl;
        cout << "Name: " << s2.name << endl;
        cout << "Roll No: " << s2.rollno << endl;
        cout << "Marks: " << s2.marks << endl;
        cout << "Average: " << s2.avg << endl;
    }

    // -------- Exit Case --------
    if(choice == 'n' || choice == 'N') {
        cout << "\nExit";   // program ends without second student
    }

    return 0;   // end of program
}

/*
================= POSSIBLE OUTPUTS =================

Case 1: User enters second student
---------------------------------
Enter your first name: Ali
Enter your roll number: 101
Enter your marks: 450
Enter your average: 90

You wrote this detail:
Name: Ali
Roll No: 101
Marks: 450
Average: 90

If you want to add another student detail enter y/n: y

Enter second student detail:
Enter your first name: Bilal
Enter your roll number: 102
Enter your marks: 400
Enter your average: 80

Second student data you entered:
Name: Bilal
Roll No: 102
Marks: 400
Average: 80


Case 2: User does not enter second student
------------------------------------------
Enter your first name: Sara
Enter your roll number: 201
Enter your marks: 480
Enter your average: 96

You wrote this detail:
Name: Sara
Roll No: 201
Marks: 480
Average: 96

If you want to add another student detail enter y/n: n

Exit

===================================================
*/
