#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int temp;

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

