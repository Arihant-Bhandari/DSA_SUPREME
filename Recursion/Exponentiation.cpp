#include <iostream>
using namespace std;

int exponent(int a, int b)
{
    if(b == 0) return 1;

    return a * exponent(a, b - 1);
}
int main()
{
    int a, b;
    cout << "Enter Base and Exponent: ";
    cin >> a >> b;

    cout << "Exponentiation: " << exponent(a, b) << endl;
    return 0;
}