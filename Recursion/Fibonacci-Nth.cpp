#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int n;
    cout << "Enter what element of Fibonacci series is needed: ";
    cin >> n;

    cout << "Nth Element: " << fibonacci(n) << endl;
    return 0;
}