#include <iostream>
using namespace std;

int main()
{
    // implicit typecasting

    int num1 = 10;
    float num2 = 5.5;

    float num3 = num1 + num2;

    cout << "implicit typecasted: float (10+5.5) => " << num3 << endl;

    int num4 = num1 + num2;

    cout << "implicit typecasted: int (10+5.5) => " << num4 << endl;

    char ch = 'A';

    char z = ch + 1;

    cout << "implicit typecasted: char (A+1) => " << z << endl;

    cout << endl;

    // explicit typecasting

    double pi = 3.14159;

    int intPi = (int) pi;

    cout << "Originally: " << pi << " Explicitly casted to: int => " << intPi << endl;

    float n = 69.96;

    char c = (char) n;

    cout << "Originally: " << n << " Explicitly casted to: char => " << c << endl;

    int a = 10;
    int b = 3;

    float f = (float) a/b;

    cout << "Originally: " << a << " " << b << " Explicitly casted to: float => " << f << endl;

    return 0;
}