#include <iostream>
using namespace std;

int main() {
    int arr[5], key, i, j, temp;
    
    cout << "Enter 5 numbers:\n";
    for(i = 0; i < 5; i++) cin >> arr[i];

    // Bubble Sort
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    // Linear Search
    cout << "Enter number to search (Linear Search): ";
    cin >> key;
    bool found = false;
    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Not found\n";

    // Binary Search (array must be sorted)
    int low = 0, high = 4, mid;
    cout << "Enter number to search (Binary Search): ";
    cin >> key;
    found = false;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if(!found) cout << "Not found\n";

    return 0;
}

