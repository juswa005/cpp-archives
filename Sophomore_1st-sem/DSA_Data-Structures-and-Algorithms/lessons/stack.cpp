#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;
    int n, choice;

    cout << "Stack operations: 1-Push 2-Pop 3-Display 4-Exit\n";

    do {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: // Push
                if (top >= 4) cout << "Stack overflow!\n";
                else {
                    cout << "Enter number to push: ";
                    cin >> n;
                    top++;
                    stack[top] = n;
                }
                break;
            case 2: // Pop
                if (top < 0) cout << "Stack underflow!\n";
                else {
                    cout << "Popped: " << stack[top] << endl;
                    top--;
                }
                break;
            case 3: // Display
                cout << "Stack: ";
                for (int i = top; i >= 0; i--) cout << stack[i] << " ";
                cout << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

