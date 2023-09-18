#include <iostream>
using namespace std;

int main() 
{
    // Declare an array of size 5
    int numbers[5];

    // Input values
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Display values
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Sum of array
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "Sum: " << sum << endl;

    return 0;
}

