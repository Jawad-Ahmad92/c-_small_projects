#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    Demo obj;  // Constructor is called here

    cout << "Object is about to be destroyed..." << endl;
    // When main() ends, the destructor is called automatically
    return 0;
}
