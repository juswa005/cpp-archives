#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 7, 42, 18};
    int maxVal = arr[0];

    // Simple linear search
    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Maximum value: " << maxVal << endl;

    return 0;
}

