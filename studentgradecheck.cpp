#include <iostream>
using namespace std;

int main() {
    char name[10];
    int num[3];
    int total = 0;

    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the 3 subject marks:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks: ";
        cin >> num[i];
    }

    // Calculate total
    for (int i = 0; i < 3; i++) {
        total += num[i];
    }

    double average = total / 3.0;

    cout << "\nName: " << name;
    cout << "\nTotal: " << total;
    cout << "\nAverage: " << average << endl;

    int greatest = num[0];

    if (num[1] > greatest) {
        greatest = num[1];
    }

    if (num[2] > greatest) {
        greatest = num[2];
    }
    int smallest = num[0];

    if (num[1] < smallest) {
        smallest = num[1];
    }

    if (num[2] < smallest) {
        smallest = num[2];
    }

    cout << "Greatest mark: " << greatest << endl;
    cout << "Smallest mark: " << smallest << endl;

    // Grade
    if (average >= 80) {
        cout << "Grade: A";
    }
    else if (average >= 70) {
        cout << "Grade: B";
    }
    else if (average >= 60) {
        cout << "Grade: C";
    }
    else if (average >= 50) {
        cout << "Grade: D";
    }
    else if (average >= 40) {
        cout << "Grade: E";
    }
    else {
        cout << "Grade: F";
    }

    return 0;
}