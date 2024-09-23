#include <iostream>
using namespace std;

int main() {
    int queue[5], front = -1, rear = -1, n, choice;

    cout << "Queue operations: 1-Enqueue 2-Dequeue 3-Display 4-Exit\n";

    do {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: // Enqueue
                if (rear >= 4) cout << "Queue overflow!\n";
                else {
                    cout << "Enter number to enqueue: ";
                    cin >> n;
                    if (front == -1) front = 0;
                    rear++;
                    queue[rear] = n;
                }
                break;
            case 2: // Dequeue
                if (front == -1 || front > rear) cout << "Queue underflow!\n";
                else {
                    cout << "Dequeued: " << queue[front] << endl;
                    front++;
                }
                break;
            case 3: // Display
                if (front == -1 || front > rear) cout << "Queue is empty\n";
                else {
                    cout << "Queue: ";
                    for (int i = front; i <= rear; i++) cout << queue[i] << " ";
                    cout << endl;
                }
                break;
        }
    } while (choice != 4);

    return 0;
}

