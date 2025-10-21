#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Default constructor
    Rectangle() {
        length = 1;
        width = 1;
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate and display area
    void area() {
        cout << "Area = " << length * width << endl;
    }
};

int main() {
    // Object using default constructor
    Rectangle r1;
    cout << "Using default constructor: ";
    r1.area();

    // Taking user input
    int l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;

    // Object using parameterized constructor
    Rectangle r2(l, w);
    cout << "Using parameterized constructor: ";
    r2.area();

    return 0;
}
