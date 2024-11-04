#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int key;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found\n";

    return 0;
}

