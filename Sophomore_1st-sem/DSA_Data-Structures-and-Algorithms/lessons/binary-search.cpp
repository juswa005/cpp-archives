#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 5, 8};
    int key;
    int low = 0, high = 4, mid;

    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) cout << "Not found\n";

    return 0;
}

