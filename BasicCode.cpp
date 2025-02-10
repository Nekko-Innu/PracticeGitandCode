#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b << endl;
}

void sub(int a, int b) {
    cout << a - b << endl;
}

void mul(int a, int b) {
    cout << a * b << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << a / b << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
}

void mold(int a, int b) {
    if (b != 0) {
        cout << a % b << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
}

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << a << " " << op << " " << b << " = ";

    switch (op) {
        case '+':
            add(a, b);
            break;
        case '-':
            sub(a, b);
            break;
        case '*':
            mul(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        case '%':
            mold(a, b);
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}