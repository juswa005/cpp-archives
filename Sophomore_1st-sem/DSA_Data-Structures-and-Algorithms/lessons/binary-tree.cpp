#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    // Manually creating a tree
    Node* root = new Node;
    root->data = 10;
    root->left = new Node;
    root->left->data = 5;
    root->left->left = root->left->right = NULL;
    root->right = new Node;
    root->right->data = 15;
    root->right->left = root->right->right = NULL;

    // Preorder traversal
    cout << "Preorder traversal: ";
    cout << root->data << " ";
    cout << root->left->data << " ";
    cout << root->right->data << endl;

    return 0;
}

