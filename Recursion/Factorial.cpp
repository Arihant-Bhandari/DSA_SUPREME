#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1) return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter number to calculate Factorial: ";
    cin >> n;

    cout << "Factorial of " << n << ": " << factorial(n) << endl;
    return 0;
}