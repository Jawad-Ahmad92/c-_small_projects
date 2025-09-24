//Initial Output (always shown first):
//	Menu:
//p = Pizza ($15.50)
//b = Burger ($9.50)
//c = Chicken ($19.99)
//r = Bread Stick ($7.20)
//d = Drinks ($4.15)
//h = Hotdog ($2.30)
//E = Exit and show bill
//
//Enter item letter: p
//Enter item letter: b
//Enter item letter: d
//Enter item letter: e
//
//Exiting order...
//
//Number of items: 3
//Total bill: $29.15
//Thank you! Enjoy your meal!


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // menu prices
    const double pizza = 15.50;
    const double burger = 9.50;
    const double chiken = 19.99;
    const double bread_stick = 7.20;
    const double drinks = 4.15;
    const double hotdog = 2.30;

    // tracking items
    double numitem = 0, total = 0, price = 0;
    char itemletter;

    cout << "Menu:\n";
    cout << "p = Pizza ($15.50)\n";
    cout << "b = Burger ($9.50)\n";
    cout << "c = Chicken ($19.99)\n";
    cout << "r = Bread Stick ($7.20)\n";
    cout << "d = Drinks ($4.15)\n";
    cout << "h = Hotdog ($2.30)\n";
    cout << "E = Exit and show bill\n\n";

    // menu display using loops
    do {
        cout << "\nEnter item letter: ";
        cin >> itemletter;

        price = 0;  // reset for each choice

        switch(itemletter) {
            case 'p': case 'P':
                price = pizza; break;
            case 'b': case 'B':
                price = burger; break;
            case 'c': case 'C':
                price = chiken; break;
            case 'r': case 'R':
                price = bread_stick; break;
            case 'd': case 'D':
                price = drinks; break;
            case 'h': case 'H':
                price = hotdog; break;
            case 'e': case 'E':
                cout << "\nExiting order...\n"; 
                break;
            default:
                cout << "Invalid option!\n";
        }

        if(price > 0) {   // valid item
            numitem++;
            total += price;
        }

    } while(itemletter != 'E' && itemletter != 'e');

    // display result
    cout << "\nNumber of items: " << numitem << endl;
    cout << "Total bill: $" << total << endl;
    cout << "Thank you! Enjoy your meal!\n";

    return 0;
}
