#include <iostream>
using namespace std;

int main() {
    int stack[5], top = -1;
    int queue[5], front = -1, rear = -1;
    int choice, num;

    do {
        cout << "\nMenu:\n1-Stack Push\n2-Stack Pop\n3-Queue Enqueue\n4-Queue Dequeue\n5-Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Stack Push
                if (top >= 4) cout << "Stack Overflow!\n";
                else {
                    cout << "Enter number: ";
                    cin >> num;
                    top++;
                    stack[top] = num;
                }
                break;
            case 2: // Stack Pop
                if (top < 0) cout << "Stack Underflow!\n";
                else {
                    cout << "Popped: " << stack[top] << endl;
                    top--;
                }
                break;
            case 3: // Queue Enqueue
                if (rear >= 4) cout << "Queue Overflow!\n";
                else {
                    cout << "Enter number: ";
                    cin >> num;
                    if (front == -1) front = 0;
                    rear++;
                    queue[rear] = num;
                }
                break;
            case 4: // Queue Dequeue
                if (front == -1 || front > rear) cout << "Queue Underflow!\n";
                else {
                    cout << "Dequeued: " << queue[front] << endl;
                    front++;
                }
                break;
        }

    } while (choice != 5);

    return 0;
}

