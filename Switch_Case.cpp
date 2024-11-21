#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Enter two values: ";
    cin >> a >> b;

    cout << "Enter operator: ";
    cin >> op;

    switch(op)
    {
        case '+':
        cout << "Addition: " << a+b << endl;
        break;

        case '-':
        cout << "Subtraction: " << a-b << endl;
        break;

        case '*':
        cout << "Multiplication: " << a*b << endl;
        break;

        case '/':
        cout << "Division: " << a/b << endl;
        break;

        default:
        cout << "Invalid Operator.";
    }

    return 0;
}