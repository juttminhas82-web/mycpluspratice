#include <iostream>
using namespace std;

int main() {
    int choice, num;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Check if number is even or odd\n";
        cout << "2. Check if number is positive or negative\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the number: ";
            cin >> num;

            cout << (num % 2 == 0 ? "The number is even": "The number is odd");
            cout << endl;
        }

        else if (choice == 2) {
            cout << "Enter the number: ";
            cin >> num;

            cout << (num < 0 ? "The number is negative" : "The number is positive");
            cout << endl;
        }

        else if (choice == 3) {
            cout << "Okay, thanks! Have fun.\n";
        }

        else {
            cout << "Please choose a number from the menu.\n";
        }

    } while (choice != 3);

    return 0;
}