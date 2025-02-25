#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

void squareRoot() {
    double x;
    cout << "Enter a number: ";
    cin >> x;
    if (x < 0) {
        cout << "Error: Cannot compute square root of a negative number." << endl;
    } else {
        cout << "√" << x << " = " << sqrt(x) << endl;
    }
}

void factorial() {
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;
    if (x < 0) {
        cout << "Error: Factorial of a negative number is undefined." << endl;
    } else {
        long long fact = 1;
        for (int i = 1; i <= x; ++i) {
            fact *= i;
        }
        cout << x << "! = " << fact << endl;
    }
}

void naturalLog() {
    double x;
    cout << "Enter a positive number: ";
    cin >> x;
    if (x <= 0) {
        cout << "Error: Natural logarithm is only defined for positive numbers." << endl;
    } else {
        cout << "ln(" << x << ") = " << log(x) << endl;
    }
}

void power() {
    double x, b;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (b): ";
    cin >> b;
    cout << x << "^" << b << " = " << pow(x, b) << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "\nScientific Calculator" << endl;
        cout << "1. Square root (√x)" << endl;
        cout << "2. Factorial (x!)" << endl;
        cout << "3. Natural logarithm (ln x)" << endl;
        cout << "4. Power function (x^b)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        switch (choice) {
            case 1: squareRoot(); break;
            case 2: factorial(); break;
            case 3: naturalLog(); break;
            case 4: power(); break;
            case 5: cout << "Exiting calculator. Bye!" << endl; return 0;
            default: cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
    return 0;
}
