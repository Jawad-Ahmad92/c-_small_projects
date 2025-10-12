#include <iostream>
#include <thread>   // for sleep_for
#include <chrono>   // for chrono::seconds
using namespace std;

int main() {
    const string correctCode = "1234";  // the correct mobile unlock code
    string userCode;
    int attempts = 0;

    while (true) {
        cout << "Enter the mobile code: ";
        cin >> userCode;

        if (userCode == correctCode) {
            cout << "\n Phone Unlock Successfully!\n";
            break; // exit program when unlocked
        } else {
            attempts++;
            cout << "Wrong code! Attempts left: " << (3 - attempts) << endl;

            if (attempts >= 3) {
                cout << "\n Too many wrong attempts. Phone is in sleep mode for 30 seconds...\n";
                this_thread::sleep_for(chrono::seconds(30)); // wait for 30 sec
                attempts = 0; // reset attempts after sleep
                cout << "You can try again now.\n\n";
            }
        }
    }

    return 0;
}
