#include <iostream>
using namespace std;

int main() {
    const int MAX = 5;
    char names[MAX][20];
    int scores[MAX];
    int total = 0;
    int highest, lowest;

    cout << "Enter student names and scores:\n";
    for (int i = 0; i < MAX; i++) {
        cout << "Name: ";
        cin >> names[i];
        cout << "Score: ";
        cin >> scores[i];
        total += scores[i];
    }

    highest = scores[0];
    lowest = scores[0];
    for (int i = 1; i < MAX; i++) {
        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
    }

    cout << "\nAverage score: " << total / MAX << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;

    cout << "\nGrades:\n";
    for (int i = 0; i < MAX; i++) {
        cout << names[i] << ": ";
        if (scores[i] >= 90) cout << "A";
        else if (scores[i] >= 80) cout << "B";
        else if (scores[i] >= 70) cout << "C";
        else if (scores[i] >= 60) cout << "D";
        else cout << "F";
        cout << endl;
    }

    return 0;
}

