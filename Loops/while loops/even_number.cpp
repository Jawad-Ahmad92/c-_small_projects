#include <iostream>
using namespace std;

int main() {
    cout << "All even numbers from 1 to 50 are: " << endl;

    int i = 1;
    while (i <= 50) {   // ✅ Use <= instead of =
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
