#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* temp;

    // Insert 3 nodes
    for (int i = 1; i <= 3; i++) {
        temp = new Node;
        temp->data = i * 10;
        temp->next = NULL;

        if (head == NULL) head = temp;
        else {
            Node* p = head;
            while (p->next != NULL) p = p->next;
            p->next = temp;
        }
    }

    // Display list
    cout << "Linked list: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

