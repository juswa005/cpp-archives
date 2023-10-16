#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    double balance = 1000.0;
    int choice;
    double amount;

    cout << "Welcome to ATM Simulation\n";
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Exiting...\n";
        return 0;
    }

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful. New balance: $" << balance << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
                } else {
                    cout << "Insufficient balance!\n";
                }
                break;
            case 4:
                cout << "Thank you! Exiting...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }
    } while (choice != 4);

    return 0;
}

