#include <iostream>
using namespace std;

int main() {
    int x = 10;        // stored on stack (static)
    int* y = new int;  // stored on heap (dynamic)
    *y = 20;

    cout << "x = " << x << endl;     // prints 10
    cout << "y = " << *y << endl;    // prints 20

    delete y;  // free heap memory
}
