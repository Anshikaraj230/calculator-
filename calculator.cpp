#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    cout << "Welcome to the Simple Calculator!" << endl;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Show operation choices
    cout << "\nChoose operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    // Perform the chosen operation
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please select 1, 2, 3, or 4." << endl;
    }

    return 0;
}
