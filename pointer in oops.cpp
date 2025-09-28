#include <iostream>
using namespace std;

class Teacher {
public:
    int* salary;   // pointer (will hold address of int)

    // constructor
    Teacher() {
        salary = new int;   // allocate memory for one int
        *salary = 50000;    // store value in allocated memory
    }

    // destructor
    ~Teacher() {
        delete salary;      // free memory
        cout << "Destructor: memory freed\n";
    }
};

int main() {
    Teacher t1;
    cout << "Salary is: " << *t1.salary << endl;
}
